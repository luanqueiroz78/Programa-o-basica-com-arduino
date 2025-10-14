int i;
for (i = 0; i < 10; i++) {
    int resto = i % 3;
    Serial.print("Resto da divisão: ");
    Serial.println(resto);
    delay(1000);
}
