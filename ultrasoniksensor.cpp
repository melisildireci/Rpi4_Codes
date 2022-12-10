#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <lcd.h>

int  lcdInit (int rows, int cols, int bits, int rs, int strb,
        int d0, int d1, int d2, int d3, int d4, int d5, int d6, int d7) ;
         
 
#define TRIG 27
#define ECHO 25 #ultrasonik sensör için 

 
void setup() {
        wiringPiSetup();
        pinMode(TRIG, OUTPUT);
        pinMode(ECHO, INPUT); 
        
        digitalWrite(TRIG, LOW);
        delay(30);
}
 
int getCM() { 
        
        digitalWrite(TRIG, HIGH); 
        delayMicroseconds(20); 
		#20 ms lik pulse ürettik ultrasonik üzerinden gönderdik
        digitalWrite(TRIG, LOW);
        # 20ms dalga üretiyoruz
 
        while(digitalRead(ECHO) == LOW); # pulsein gidip gelmesi lazým zaman geri gelip 
       
        long startTime = micros();
        # þimdiki cpu zamaný nedir micro second olarak
        while(digitalRead(ECHO) == HIGH);
        long travelTime = micros() - startTime;
  # þimdik zaman - en sonki durum 
        
        int distance = travelTime / 58; 
        # 58 kural
 
        return distance;
        
}
 
int main(void) {
	#ana function
		int lcd;
		wiringPiSetup();
		lcd = lcdInit (2, 16, 8,  11,10 , 0,1,2,3,4,5,6,7) ;
        setup();
       
		while(getCM()>10 && getCM()<50) 
		#10 ile 50 cm arasýndaki distancelarý okumak istiyorum 
		{
		lcdPosition(lcd, 0, 0); 
        lcdPrintf(lcd,"%d", getCM());
        delay(100);
		lcdClear(lcd);
		delay(25);	
		#distanceleri lcd de göster
	}
        return 0;
}
#cm üzerinde bulmak için 
