ctividad 1 - Semáforo LED
// Materia: Internet de las Cosas

// Definición de los pines de los LED
int ledRojo = 8;
int ledAmarillo = 9;
int ledVerde = 10;

void setup() {
  // Configuración de los pines como salidas
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {

  // 1. Encender LED rojo
  digitalWrite(ledRojo, HIGH);
  delay(3000);
  digitalWrite(ledRojo, LOW);

  // 2. Encender LED amarillo
  digitalWrite(ledAmarillo, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo, LOW);

  // 3. Encender LED verde
  digitalWrite(ledVerde, HIGH);
  delay(3000);
  digitalWrite(ledVerde, LOW);

  // 4. Volver a encender LED amarillo
  digitalWrite(ledAmarillo, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo, LOW);

  // El ciclo vuelve a comenzar con el LED rojo
}
