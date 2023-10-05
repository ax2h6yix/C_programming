#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,c,d;
	scanf("%ld",&a);
	for(int i=0;i<a;i++){
		b=pow(i+1,2);
		printf("%d^2=%d ",i+1,b);
	}
	printf("\n");
	for(int i=0;i<a;i++){
		c=pow(i+1,3);
		printf("%d^3=%d ",i+1,c);
	}
	return 0;
}
