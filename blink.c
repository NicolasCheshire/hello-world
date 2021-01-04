#include <wiringPi.h>

const int ledpin = 17;
const int buttonpin = 15;

int main(void){
	wiringPiSetupGpio();
	pinMode(ledpin, OUTPUT);
	pinMode(buttonpin, INPUT);
	pullUpDnControl(15, PUD_DOWN);

	while(1){
		if(digitalRead(buttonpin)){
			digitalWrite(ledpin, HIGH);
		}
		else{
			digitalWrite(ledpin, LOW);
		}
		
	}
}
