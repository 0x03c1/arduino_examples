/*
 * 12 - Challenge: Sensor LDR + LED
 * ---------------------------------
 * Este exemplo usa um LDR para medir luminosidade e acionar um LED:
 *   - Ambiente escuro (valor abaixo do limiar): LED liga
 *   - Ambiente claro (valor acima do limiar): LED desliga
 *
 * OBS: este exemplo foi ajustado para refletir corretamente o uso do LDR.
 *
 * Hardware:
 *   - Arduino UNO
 *   - LDR no pino analógico A0
 *   - LED no pino 13
 */

const int LDR_PIN = A0;
const int LED_PIN = 13;
const int LDR_THRESHOLD = 500;

int ldrValue;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LDR_PIN, INPUT);
}

void loop()
{
  ldrValue = analogRead(LDR_PIN);
  Serial.print("LDR: ");
  Serial.println(ldrValue);

  if (ldrValue < LDR_THRESHOLD)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}
