#include<Arduino.h>

void setup(){
	pinMode(2,OUTPUT);
	pinMode(13,OUTPUT);
}

void loop(){
	delay(1000);
	digitalWrite(2,HIGH);
	digitalWrite(13,LOW);
	delay(1000);
	digitalWrite(2,LOW);
	digitalWrite(13,HIGH);
}

