#include <stdio.h>
#include <math.h>
int main(){
	int aci;
	float result ,PI= 3.14 ;
	for(aci=0; aci<=360; aci= aci+30){
		printf("%d \n" , aci );
		//radyan = aci * PI/180; //PI = math da pi 
	if(aci == 150){
		continue;
	}
	if(aci >180){
		break;
	}
    	result = sin((aci )* (PI/180));
    	printf("sin(%d) = %.2f \n " , aci , result);
	}
	
	return 0 ;
}

//hem cont hem brak kullandýk.
//bir zýplama ve devam etme için continue kullanýyoruz, tamamen durdurmak içinse break kullanýyoruz.



a<
