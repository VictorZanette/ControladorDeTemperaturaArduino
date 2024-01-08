// C++ code
//
#define pinLed 2
#define buzzer 3
#define motor 4

void setup()
{
 pinMode(pinLed, OUTPUT);
 pinMode(buzzer, OUTPUT);
 pinMode(motor,  OUTPUT);
}

void loop()
{
  int temp = analogRead(A0);

if
    (temp > 165 && temp < 205)
 { digitalWrite(pinLed, LOW);
  digitalWrite(motor, HIGH);
  digitalWrite(buzzer, LOW);
 }

 else if
   (temp >= 205)
   { digitalWrite(pinLed, HIGH);
    digitalWrite(buzzer, HIGH);
    digitalWrite(motor, HIGH);
   }
  else {
    digitalWrite(pinLed, LOW);
  digitalWrite(buzzer, LOW);
  digitalWrite(motor,LOW);
  }
}