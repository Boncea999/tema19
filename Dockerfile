FROM ubuntu:20.04
WORKDIR /app
COPY . .
RUN g++ -o myapp myapp.c
CMD ["./myapp"]
