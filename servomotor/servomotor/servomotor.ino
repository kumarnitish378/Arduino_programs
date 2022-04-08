#include <Servo.h>
Servo myservo;
static const int servosPins[4] = {32, 18, 14,4};

Servo servos[4];

void setup()
{
  Serial.begin(115200);

  for (int i = 0; i <= 3; ++i) {
    if (!servos[i].attach(servosPins[i])) {
      Serial.print("Servo ");
      Serial.print(i);
      Serial.println("attach error");
    }
  }
}

void loop()
{
  for(int i=40;i<=120;i++)
  {
   servos[0].write(i);
   delay(20);
  }
for(int i =0; i <= 60; i++)
{
   servos[1].write(i);
   delay(20);
}
for(int i =180; i >= 90; i--)
{
servos[2].write(i);
delay(20);
}
for(int i =0; i <= 160; i++)
{
servos[3].write(i);
delay(2000);
}
for(int i =160; i>= 130; i--)
{
servos[3].write(i);
delay(200);
}
for(int i=120;i>=40 ;i--)
  {
   servos[0].write(i);
   delay(20);
  }
for(int i =60; i >= 0; i--)
{
   servos[1].write(i);
   delay(20);
}
//for(int i =180; i <= 180; i--)
//{
//servos[2].write(i);
//delay(20);
//}
for(int i =130; i <= 160; i++)
{
servos[3].write(i);
delay(2000);
}
}
