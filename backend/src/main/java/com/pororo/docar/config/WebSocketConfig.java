package com.pororo.docar.config;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.pororo.docar.config.dto.CartBookList;
import com.pororo.docar.config.dto.SensorInfo;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.stereotype.Component;
import org.springframework.web.socket.TextMessage;
import org.springframework.web.socket.WebSocketSession;
import org.springframework.web.socket.config.annotation.EnableWebSocket;
import org.springframework.web.socket.config.annotation.WebSocketConfigurer;
import org.springframework.web.socket.config.annotation.WebSocketHandlerRegistry;
import org.springframework.web.socket.handler.TextWebSocketHandler;
import org.springframework.web.socket.server.HandshakeHandler;
import org.springframework.web.socket.server.support.DefaultHandshakeHandler;
import org.springframework.web.socket.server.support.HttpSessionHandshakeInterceptor;

import java.io.IOException;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

@Configuration
@EnableWebSocket
public class WebSocketConfig implements WebSocketConfigurer {

    @Override
    public void registerWebSocketHandlers(WebSocketHandlerRegistry registry) {
        registry.addHandler(new MyWebSocketHandler(), "/ws").setAllowedOrigins("*")
                .addInterceptors(new HttpSessionHandshakeInterceptor());
    }

    @Component
    public static class MyWebSocketHandler extends TextWebSocketHandler {
        private static final List<WebSocketSession> sessions = new CopyOnWriteArrayList<>();
        @Override
        public void afterConnectionEstablished(WebSocketSession session) throws Exception {
            System.out.println("WebSocket 연결됨: " + session.getId());
            sessions.add(session);
        }

        @Override
        protected void handleTextMessage(WebSocketSession session, TextMessage message) throws Exception {
            System.out.println("WebSocket 메시지 수신: " + message.getPayload());
            ObjectMapper mapper = new ObjectMapper();
            SensorInfo sensorInfo = mapper.readValue(message.getPayload(), SensorInfo.class);
            String jsonMessage = mapper.writeValueAsString(sensorInfo);
            for (WebSocketSession s : sessions) {
                if (s.isOpen()) {
                    s.sendMessage(new TextMessage(jsonMessage));
                }
            }
        }

        public void sendIndexAndDepthListsToAllSessions(List<Long> indexList, List<Long> depthList, Long bookShelfIndex) {
            ObjectMapper mapper = new ObjectMapper();
            CartBookList cartBookList = new CartBookList(indexList, depthList, bookShelfIndex);
            String jsonMessage;
            try {
                jsonMessage = mapper.writeValueAsString(cartBookList);
            } catch (JsonProcessingException e) {
                // 예외 처리
                return;
            }

            for (WebSocketSession s : sessions) {
                if (s.isOpen()) {
                    try {
                        s.sendMessage(new TextMessage(jsonMessage));
                    } catch(IOException e) {
                        return;
                    }
                }
            }
        }
    }

    @Bean
    public HandshakeHandler handshakeHandler() {
        return new DefaultHandshakeHandler();
    }
}
