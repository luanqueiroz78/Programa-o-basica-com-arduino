// Pinos para o sensor ultrassônico
int pinoTrig = 7;
int pinoEcho = 6;
// Pino para o buzzer
int pinoBuzzer = 8;
long duracao;
int distancia;

void setup() {
pinMode(pinoTrig, OUTPUT);
pinMode(pinoEcho, INPUT);
pinMode(pinoBuzzer, OUTPUT);
Serial.begin(9600);
}

void loop() {
// Dispara o pulso ultrassônico
digitalWrite(pinoTrig, LOW);
delayMicroseconds(2);
digitalWrite(pinoTrig, HIGH);
delayMicroseconds(10);
digitalWrite(pinoTrig, LOW);
// Lê o tempo de retorno do pulso
duracao = pulseIn(pinoEcho, HIGH);
// Calcula a distância em centímetros
distancia = duracao * 0.034 / 2;

Serial.print("Distancia: ");
Serial.print(distancia);

Serial.println(" cm");
// Controla o buzzer com base na distância
if (distancia <= 10) {
tone(pinoBuzzer, 1500); // Bip contínuo
} else if (distancia <= 50) {
tone(pinoBuzzer, 1000, 200); // Bips rápidos
delay(distancia * 2);
} else if (distancia <= 100) {
tone(pinoBuzzer, 1000, 200); // Bips lentos
delay(distancia * 4);
} else {
noTone(pinoBuzzer); // Sem som
}
}