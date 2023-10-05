#include<stdio.h>
typedef long long ll;
int main(){
	ll term=0,sum=0;
	int a,i,n;
	printf("Input a,n:");
	scanf("%d,%d",&a,&n);
	for(i=1;i<=n;i++){
		term=term*10+a;
		printf("%ld",term);
		sum+=term;
		if(i-n)printf("+");
	}
	printf("\nsum=%ld\n",sum);
	return 0;
}
