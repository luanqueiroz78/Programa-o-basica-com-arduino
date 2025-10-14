int led = 6;
int botao = 5;
bool estadoLed = 0;
void setup()
{
// Configura o pino do LED como saída
pinMode(led, OUTPUT);
// Configura o pino do botão como entrada com resistor de pull-up
pinMode(botao, INPUT_PULLUP);
}
void loop()
{
// Se o botão for pressionado (sinal LOW devido ao pull-up)
if(digitalRead(botao) == LOW){
// Inverte o estado do LED (se era 0, vira 1; se era 1, vira 0)
estadoLed = !estadoLed;
digitalWrite(led, estadoLed);
// Espera até que o botão seja solto para evitar múltiplos
while(digitalRead(botao) == LOW);
delay(100); // Pequeno delay para debounce
}
}