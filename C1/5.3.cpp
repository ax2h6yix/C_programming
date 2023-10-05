#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,d;
	scanf("%lf %lf %lf",&a,&b,&c);
	d=0.5*(a+b+c);
	if(a+b>c&&a+c>b&&b+c>a){
		printf("%f",sqrt(d*(d-a)*(d-b)*(d-c)));
	}else{
		printf("error");
	}
	return 0;
}
