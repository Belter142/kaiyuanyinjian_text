
int incomingByte = 0;

 
void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

//*-** *---****
void loop()
{
  if (Serial.available() > 0){
    incomingByte = Serial.read();
    switch(incomingByte){
      case'a': dot();dash();c_space();break;
      case'b': dash();dot();dot();dot();c_space();break;
      case'c': dash();dot();dash();dot();c_space();break;
      case'd': dash();dot();dot();c_space();break;
      case'e': dot();c_space();break;
      case'f': dot();dot();dash();dot();c_space();break;
      case'g': dash();dash();dot();c_space();break;
      case'h': dot();dot();dot();dot();c_space();break;
      case'i': dot();dot();c_space();break;
      case'j': dot();dash();dash();dash();c_space();break;
      case'k': dash();dot();dash();c_space();break;
      case'l': dot();dash();dot();dot();c_space();break;
      case'm': dash();dash();c_space();break;
      case'n': dash();dot();c_space();break;
      case'o': dash();dash();dash();c_space();break;
      case'p': dot();dash();dash();dot();c_space();break;
      case'q': dash();dash();dot();dash();c_space();break;
      case'r': dot();dash();dot();c_space();break;
      case's': dot();dot();dot();c_space();break;
      case't': dash();c_space();break;
      case'u': dot();dot();dash();c_space();break;
      case'v': dot();dot();dot();dash();c_space();break;
      case'w': dot();dash();dash();c_space();break;
      case'x': dash();dot();dot();dash();c_space();break;
      case'y': dash();dot();dash();dash();c_space();break;
      case'z': dash();dash();dot();dot();c_space();break;
      case' ': w_space();break;
    }
  }
    delay(3000);
}
void dot()
{
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
}

void dash()
{
  digitalWrite(13,HIGH);
  delay(750);
  digitalWrite(13,LOW);
  delay(250);
}

void c_space()
{
  digitalWrite(13,LOW);
  delay(500);
}

void w_space()
{
  digitalWrite(13,LOW);
  delay(1000);
}
