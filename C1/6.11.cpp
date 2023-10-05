#include<stdio.h>
#include<math.h>
int main(){
	int a,b=1,c=1,d=1;
	scanf("%d",&a);
	while(a>=b){
		printf("m=%d\n",d);
		c*=(++d),b+=c;
	}
	return 0;
}
