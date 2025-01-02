# Imaginea de bază
FROM ubuntu:20.04

# Setăm directorul de lucru
WORKDIR /app

# Copiem toate fișierele în container
COPY . .

# Comandă implicită pentru rulare
CMD ["./myapp"]
