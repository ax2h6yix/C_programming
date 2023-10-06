#include<stdio.h>
int main(){
	double a,b,c,d;
	for(int i=0;i<31;i++){
		a=10*i,b=5*(a-32)/9;
		printf("F=%7.2f C=%7.2f\n",a,b);
	}
	return 0;
}
