// Pinos para os LEDs dos carros
int ledCarroVermelho = 13;
int ledCarroAmarelo = 12;
int ledCarroVerde = 11;
// Pinos para os LEDs dos pedestres
int ledPedestreVermelho = 10;
int ledPedestreVerde = 9;
// Pino para o botão
int pinoBotao = 2;
void setup() {
pinMode(ledCarroVermelho, OUTPUT);
pinMode(ledCarroAmarelo, OUTPUT);
pinMode(ledCarroVerde, OUTPUT);
pinMode(ledPedestreVermelho, OUTPUT);
pinMode(ledPedestreVerde, OUTPUT);
pinMode(pinoBotao, INPUT_PULLUP); // Usa resistor interno
}

void loop() {
// Rotina normal: sinal verde para carros
digitalWrite(ledCarroVerde, HIGH);
digitalWrite(ledPedestreVermelho, HIGH);
// Verifica se o botão foi pressionado
if (digitalRead(pinoBotao) == LOW) {
delay(50); // Anti-bouncing do botão
// Inicia a transição para o pedestre
digitalWrite(ledCarroVerde, LOW);
digitalWrite(ledCarroAmarelo, HIGH);

delay(2000); // Sinal amarelo
digitalWrite(ledCarroAmarelo, LOW);
digitalWrite(ledCarroVermelho, HIGH);
delay(1000);
// Libera para o pedestre
digitalWrite(ledPedestreVermelho, LOW);
digitalWrite(ledPedestreVerde, HIGH);
delay(5000); // Tempo de travessia
// Alerta para fim do tempo
for (int i = 0; i < 5; i++) {
digitalWrite(ledPedestreVerde, LOW);
delay(250);
digitalWrite(ledPedestreVerde, HIGH);
delay(250);
}
// Volta ao estado inicial
digitalWrite(ledPedestreVerde, LOW);
digitalWrite(ledPedestreVermelho, HIGH);
delay(1000);
digitalWrite(ledCarroVermelho, LOW);
}
}