#include <stdio.h>
#include <wiringPi.h>

#define LCD_E 24 //ENABLE PÝN
#define LCD_RS 25
#define LCD_D4 23               //Data pin 4
#define LCD_D5 22               //Data pin 5
#define LCD_D6 21               //Data pin 6
#define LCD_D7 14   

int main()

{
	int a;
	
	printf("enter two integers \n ");
	printf("the relationships they satisfy:");
	scanf("%d" , &a);
	
	
	
	wiringPiSetup();        
    lcd = lcdInit (2, 16, 4, LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7, 0, 0, 0, 0);
    lcdPosition(lcd, 1, 0);
	lcdClear(lcd);
	
	
	if (a%2==0)
	{
		lcdPrintf("%d is an even number \n");
		
	}
	else
	{
		lcdPrintf("%d is odd number \n");
	}

	return 0;
	
}
