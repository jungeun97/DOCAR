package com.pororo.docar.config;

import com.fasterxml.jackson.databind.ObjectMapper;
import lombok.Data;
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
            Payload payload = mapper.readValue(message.getPayload(), Payload.class);
            String jsonMessage = mapper.writeValueAsString(payload);
            for (WebSocketSession s : sessions) {
                if (s.isOpen()) {
                    s.sendMessage(new TextMessage(jsonMessage));
                }
            }
        }

        public void sendIndexAndDepthListsToAllSessions(List<Long> indexList, List<Long> depthList) {
            String indexListMessage = convertListToString(indexList);
            String depthListMessage = convertListToString(depthList);

            for (WebSocketSession s : sessions) {
                if (s.isOpen()) {
                    try {
                        // indexList와 depthList를 텍스트 메시지로 변환하여 세션에 전송합니다.
                        s.sendMessage(new TextMessage("{indexList: " + indexListMessage + "}"));
                        s.sendMessage(new TextMessage("{depthList: " + depthListMessage + "}"));
                    } catch (IOException e) {
                        // 에러 캐치
                    }
                }
            }
        }

        private String convertListToString(List<Long> list) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < list.size(); i++) {
                sb.append(list.get(i));
                if (i < list.size() - 1) {
                    sb.append(",");
                }
            }
            return sb.toString();
        }
    }

    @Bean
    public HandshakeHandler handshakeHandler() {
        return new DefaultHandshakeHandler();
    }

    @Data
    public static class Payload {
        private long distance;
        private String barcode;

        public Payload() {}

        public Payload(long distance, String barcode) {
            this.distance = distance;
            this.barcode = barcode;
        }
    }
}
