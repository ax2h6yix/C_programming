#include<stdio.h>
typedef long long ll;
int main(){
	ll i;
	ll term,sum=0;
	for(i=1;i<=99;i+=2){
		printf("%d*%d*%d",i,i+1,i+2);
		term=i*(i+1)*(i+2);
		sum+=term;
		if(i-99)printf("+");
	}
	printf("\nsum=%ld",sum);
	return 0;
}
