#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	double a=1,b,c,d;
	int f,g,h,i;
	scanf("%lf %d",&b,&f);
	switch(f){
		case 1:
			a=2.25/100;
			break;
		case 2:
			a=2.43/100;
			break;
		case 3:
			a=2.7/100;
			break;
		case 5:
			a=2.88/100;
			break;
		case 8:
			a=3/100;
			break;
		default:
			printf("error");
			exit(0); 
	}
	printf("%f",b*pow((1+a),f));
	return 0;
}
