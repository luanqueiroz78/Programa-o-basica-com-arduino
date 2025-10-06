// Atividade 2: Sequência de LEDs
int pinosLed[] = {13, 12, 11};
int tempo = 300;
void setup() {
// Usa um laço 'for' para configurar todos os pinos
for (int i = 0; i < 3; i++) {
pinMode(pinosLed[i], OUTPUT);
}
}

void loop() {
// Liga e desliga cada LED em sequência
for (int i = 0; i < 3; i++) {
digitalWrite(pinosLed[i], HIGH);
delay(tempo);
digitalWrite(pinosLed[i], LOW);
delay(tempo);
}
}