int i;
for (i = 0; i < 10; i++) {
    int resto = i % 3;

    Serial.print("Resto da divisão: ");
    Serial.println(resto);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

    if (resto == 0) {
    digitalWrite(led1, HIGH);
    } else if (resto == 1) {
    digitalWrite(led2, HIGH);
    } else {
    digitalWrite(led3, HIGH);
    }

    delay(1000);
}

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);

