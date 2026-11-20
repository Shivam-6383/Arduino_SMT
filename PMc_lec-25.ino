
#include <Arduino.h> // don't include this file, this is just to control errors in vs code and not in arduino ide 

// PUSHBUTTON AS TOGGLE SWITCH 
int ledPin = 12;
int ledState = 0;
int btnPin = 2;
int btnNew;
int btnOld = 0;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin , INPUT);
}

void loop()
{
  int btnNew =  digitalRead(btnPin);
  if(btnNew == 1 && btnOld == 0){
  
    if(ledState == 0){
    digitalWrite(ledPin , 1);
    ledState = 1;
    }
    else {
    digitalWrite(ledPin , 0);
    ledState = 0;
    }
  }
  btnOld = btnNew;
}