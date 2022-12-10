#include <wiringPi.h>           
#include <lcd.h>    
#include <math.h>
#include <stdio.h>            
 
//USE WIRINGPI PIN NUMBERS
#define LCD_RS  25               //Register select pin
#define LCD_E   24               //Enable Pin
#define LCD_D4  23               //Data pin 4
#define LCD_D5  22               //Data pin 5
#define LCD_D6  21               //Data pin 6
#define LCD_D7  14               //Data pin 7
 
int main()
{	
    wiringPiSetup();        
    lcd = lcdInit (2, 16, 4, LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7, 0, 0, 0, 0);
	int a,lcd;
	lcdClear(lcd)
    printf("Enter the a\n");
    scanf("%d", &a);
    if (a%2==0){
        
        lcdPosition(lcd,1,0);
		lcdPrintf(lcd, "%d is even",&a);
    }
    else{
		
		lcdPosition(lcd,1,0);
		lcdPrintf(lcd, "%d is odd.",&a);
	}
	return 0;
}
