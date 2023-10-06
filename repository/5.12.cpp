#include<stdio.h>
int main(){
	double a,b,bmi;
	int c;
	scanf("%lf %lf",&a,&b);
	bmi=b/(a*a);
	printf("bmi=%f\n",bmi);
	
	//p1
	if(bmi<18)c=0;
	if(bmi>=18&&bmi<25)c=1;
	if(bmi>=25&&bmi<27)c=2;
	if(bmi>=27)c=3;
	
	/*
	//p2
	if(bmi<18){
		c=0;
	}else if(bmi>=18&&bmi<25){
		c=1;
	}else if(bmi>=25&&bmi<27){
		c=2;
	}else c=3;
	*/
	
	switch(c){
		case 0:
			printf("Low weight");
			break;
		case 1:
			printf("Normal weight");
			break;
		case 2:
			printf("High weight");
			break;
		case 3:
			printf("YOUR ARE TOO FAT");
			break;
		default:
			printf("error");
			break;
	} 
	return 0;
}
