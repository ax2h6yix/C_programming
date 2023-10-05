#include<stdio.h>
#include<math.h>
typedef long long ll;
int main(){
	int n=1,count=1;
	double x;
	double sum,term;
	printf("Input x:");
	scanf("%lf",&x);
	sum=x;
	term=x;
	do{
		term*=(-pow(x,2)/((n+1)*(n+2)));
		printf("%10f %f\n",sum,term);
		sum+=term;
		n+=2;
		count++;
	}while(fabs(term)>=1e-5);
	printf("sin(x)=%f,count=%d\n",sum,count);
	return 0;
}
//Ì©ÀÕÕ¹¿ª 
