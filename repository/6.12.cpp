#include<stdio.h>
#include<math.h>
int main(){
	double a=1,b=-1,c;
	while(a>0){
		b+=a;
		scanf("%lf",&a);
	}
	printf("%.2f",b);
	return 0;
}
