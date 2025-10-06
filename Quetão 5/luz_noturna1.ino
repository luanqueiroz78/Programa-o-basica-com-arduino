// Pino onde o LDR está conectado (pino analógico)
int pinoLDR = A0;
// Pino onde o LED está conectado
int pinoLED = 9;
// Limite de luz para acender o LED (ajuste conforme necessário)
int limiteLuz = 300;

void setup() {
pinMode(pinoLED, OUTPUT);
Serial.begin(9600); // Inicia o monitor serial para debug
}

void loop() {
// Lê o valor do sensor de luz (varia de ~0 a 1023)
int valorLuz = analogRead(pinoLDR);

// Imprime o valor lido para ajudar a calibrar o limite
Serial.print("Valor da Luz: ");
Serial.println(valorLuz);
// Se a luz estiver baixa (escuro), acende o LED
if (valorLuz < limiteLuz) {
digitalWrite(pinoLED, HIGH);
} else { // Senão, apaga o LED
digitalWrite(pinoLED, LOW);
}

delay(100); // Pequena pausa
}