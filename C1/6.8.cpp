#include<stdio.h>
#include<cmath>
int main(){
	double a=0,b=1,c=0,d;
	while(fabs(b)>=1e-4){
		a+=b,b=pow(-1,++c)*(1/(2*c+1));
	}
	printf("%f",4*a);
	return 0;
}
