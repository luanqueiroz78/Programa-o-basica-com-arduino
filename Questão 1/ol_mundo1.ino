// Atividade 1: Pisca LED
void setup() {
pinMode(13, OUTPUT); // Configura o pino 13 como saída
}

void loop() {
digitalWrite(13, HIGH); // Liga o LED
delay(1000); // Espera 1 segundo
digitalWrite(13, LOW); // Desliga o LED
delay(1000); // Espera 1 segundo
}