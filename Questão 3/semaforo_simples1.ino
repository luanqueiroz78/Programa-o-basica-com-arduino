// C++ code
//

int led_vermelho = 2;
int led_amarelo = 3;
int led_verde = 4;
  
void setup()
{
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop()
{
  digitalWrite(led_vermelho, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_verde, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite (led_verde, LOW);
  digitalWrite (led_amarelo,HIGH);
  delay(1000);
  digitalWrite (led_amarelo,LOW);
}