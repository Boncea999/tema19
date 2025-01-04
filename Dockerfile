FROM ubuntu:20.04
WORKDIR /app
COPY . .
RUN gcc -o myapp myapp.c 
CMD ["./myapp"]
