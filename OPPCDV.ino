#include <Ultrasonic.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     13
#define Vibracall 3

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup()
  {
  int pre_pwm = 0;
  Serial.begin(9600);
  
  }

void loop()
  {
  float CMs, x;
  long x = ultrasonic.timing();

  CMs = ultrasonic.convert(x, Ultrasonic::CM);
  Serial.print(CMs);
  Serial.print("Cm");
  delay(500);
  
  pre_pwm = CMs;
  PWM = map(pre_pwm, 1, 150, 0, 255);
  analogWrite(3 , PWM);

 
  }
