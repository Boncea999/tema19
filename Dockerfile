FROM ubuntu:20.04
WORKDIR /app
RUN apt-get update && apt-get install -y gcc && apt-get clean
COPY . .
RUN gcc -o myapp myapp.c 
CMD ["./myapp"]
