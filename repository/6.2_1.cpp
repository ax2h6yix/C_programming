#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<=101;i+=2)sum+=i;
	printf("sum=%d\n",sum);
	return 0;
}
//(1+101)*51/2=2601
