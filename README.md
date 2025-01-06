# Traversarea Arborilor Binari
Acest proiect implementează traversările pentru un arbore binar ordonat:
- `pre-ordine`
- `in-ordine`
- `post-ordine`
- pe niveluri (`niveluri`).
Proiectul utilizează un container Docker pentru a compila și rula codul sursă.
## **Platforma Software Utilizată**
- **Limbaj de programare:** C
- **Compilator:** GCC
- **Mediu de rulare:** Docker
- **Sistem de versionare:** Git/GitHub
## **Detalii despre Implementare**
Codul definește o structură pentru un arbore binar și funcții pentru inserarea nodurilor și traversarea arborelui. Traversările sunt implementate pentru toate metodele clasice:
1. Pre-ordine (`pre-order`).
2. In-ordine (`in-order`).
3. Post-ordine (`post-order`).
4. Pe niveluri (`level-order`).
## **Modalitate de Rulare**
### Construirea imaginii Docker
1. **Construirea imaginii Docker**
docker build -t andrei5004/tema19:latest .
2. **Logarea pe Docker Hub**
docker login
3. **Publicarea imaginii pe Docker Hub**
docker push andrei5004/tema19:latest
4. **Descarcarea imaginii Docker**
docker pull  andrei5004/tema19:latest
5. **Rularea imaginii Docker**
docker run --rm andrei5004/tema19:latest
