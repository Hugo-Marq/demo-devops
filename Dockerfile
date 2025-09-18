FROM ubuntu:20.04
RUN apt-get update && apt-get install -y g++
WORKDIR /app
COPY . .
RUN g++ -o hello main.cpp
CMD ["./hello"]