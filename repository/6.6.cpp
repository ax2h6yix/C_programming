#include<stdio.h>
#include<math.h>
int main(){
	double a,b=0,c,d=1.875/100;
//	b=a+a*12*d;b=b-1000;a=b;
	for(int i=0;i<5;i++){
		b+=1000,a=b/(1+d*12),b=a;
	}
	printf("%f",a);
	return 0;
}
