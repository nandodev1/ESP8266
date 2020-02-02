#include<Arduino.h>

void setup(){
	pinMode(2,OUTPUT);
	pinMode(SCK,OUTPUT);
}

void loop(){
	delay(1000);
	digitalWrite(2,LOW);
	digitalWrite(SCK,LOW);
	delay(1000);
	digitalWrite(2,HIGH);
	digitalWrite(SCK,HIGH);
}

