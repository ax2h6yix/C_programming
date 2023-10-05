#include<stdio.h>
#include<math.h>
int main(){
	double a,b;
	int r=0;
	printf("increase rate=");
	scanf("%lf",&a);
	while(1){
		if(pow(a,++r)>=2){
			printf("%d",r);
			break;
		}
		b=pow(a,r);
		printf("%f\n",b);
	}
	return 0;
}
