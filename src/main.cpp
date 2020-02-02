#include<Arduino.h>

void setup(){
	pinMode(2,OUTPUT);
	pinMode(SCK,OUTPUT);
}

void loop(){
	delay(1000);
	digitalWrite(SCK,LOW);
	digitalWrite(2,HIGH);

	delay(1000);
	digitalWrite(2,LOW);
	digitalWrite(SCK,HIGH);
}

