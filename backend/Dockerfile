FROM adoptopenjdk/openjdk11
WORKDIR /usr/app
COPY build/libs/docar-0.0.1-SNAPSHOT.jar d101.jar
EXPOSE 8090
CMD ["java", "-jar", "d101.jar"]