#include<stdio.h>
#include<cmath>
int main(){
	double a=0,b=1,c=0,d;
	while(fabs(b)>=1e-5){
		a+=b,b/=(++c);
		printf("%f\n",b);
	}
	printf("\n%f",a);
	return 0;
}
