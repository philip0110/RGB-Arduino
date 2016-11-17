

int test;
int LEDblau = 6;
int LEDrot = 7;
int LEDgreen = 5;

int taster = 11;
int zeit2 = 50;
int zeit = 125;
int mode = 0;
int helligkeit = 0;
int fadenschritte = 5;


void setup() {
  pinMode(LEDblau, OUTPUT);
  pinMode(LEDrot, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(taster, INPUT);
}

void loop() {



  if (mode >= 6)
  {
    mode = 0;
    digitalWrite(LEDblau, LOW);
    digitalWrite(LEDgreen, LOW);
    digitalWrite(LEDrot, LOW);
    delay(zeit);
  }

  if (digitalRead(taster) == HIGH)
  {
    mode = mode + 1;
    delay(zeit);
  }


  if (mode == 1)
  {
    digitalWrite(LEDblau, HIGH);
    digitalWrite(LEDrot, LOW);
    delay(zeit);
  }

  if (mode == 2)
  {
    digitalWrite(LEDblau, LOW);
    digitalWrite(LEDgreen, HIGH);
    delay(zeit);
  }

  if (mode == 3)
  {
    digitalWrite(LEDgreen, LOW);
    digitalWrite(LEDrot, HIGH);
    delay(zeit);
  }

   if (mode == 4)
  {
    
    digitalWrite(LEDgreen, LOW);
    delay(zeit2);
    digitalWrite(LEDblau, LOW);
    delay(zeit2);
    digitalWrite(LEDrot, LOW);
    delay(zeit2);
    digitalWrite(LEDgreen, HIGH);
    delay(zeit2);
    digitalWrite(LEDblau, HIGH);
    delay(zeit2);
    digitalWrite(LEDrot, HIGH);
  }


  if (mode == 5)
  {
   digitalWrite(LEDrot, LOW); 
   digitalWrite(LEDgreen, LOW);
   analogWrite(LEDblau, helligkeit);
   helligkeit = helligkeit + fadenschritte;
   delay (25);
  }  

 
   if (helligkeit ==0 || helligkeit == 255)
      {
        fadenschritte = -fadenschritte;
      }


      

}
