// C++ code
//
int tempo = 0;

int i = 0;

int luminosidade = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  luminosidade = analogRead(A0);
  Serial.println(luminosidade);
  delay(10); // Delay a little bit to improve simulation performance
}