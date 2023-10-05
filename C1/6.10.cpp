#include<stdio.h>
#include<math.h>
int main(){
	int a=100,b,c;
	while(a-1000){
		b=pow((a/100),3)+pow((a/10)%10,3)+pow(a%10,3);
		if(a==b)printf("%d ",b);
		a++;
	}
	return 0;
}
