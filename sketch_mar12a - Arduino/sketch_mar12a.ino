const int ledv = 2;
const int ledr = 4;
const int leda = 6;
const int pb1 = 8;
const int pb2 = 10;
const int pb3 = 12;
const int potenciometro = A3;
int valorPotenciometro = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledv, OUTPUT);
  pinMode(ledr, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(pb1, INPUT_PULLUP);
  pinMode(pb2, INPUT_PULLUP);
  pinMode(pb3, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pb1) == HIGH) {
    digitalWrite(ledv, HIGH);
  } else {
    digitalWrite(ledv, LOW);
  }
  if (digitalRead(pb2) == HIGH) {
    digitalWrite(ledr, HIGH);
  } else {
    digitalWrite(ledr, LOW);
  }
  if (digitalRead(pb3) == HIGH) {
    digitalWrite(leda, HIGH);
  } else {
    digitalWrite(leda, LOW);
  }
  valorPotenciometro = digitalRead(potenciometro);
  Serial.print("El valor del potenciometro es de: ");
  Serial.println(valorPotenciometro);
  delay(100);
}
