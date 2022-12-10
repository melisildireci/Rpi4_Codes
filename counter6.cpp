#include <stdio.h>

// 5tane öğrenci var vize puanlarının ortalamasını hesapla.
int main(){
	

int grade , student=1 ,sum=0; //counter2=i;

float ave;


while (student<6){
	printf("please enter %d grade: \n",student);
    scanf("%d" , &grade);
	sum = sum+grade;
	student = student+1;
	
	


}
	ave= (float)sum/(student-1); 
	printf("ave = %.2f. \n" ,ave);
	return 0;
}
