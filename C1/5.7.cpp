#include<stdio.h>
int main(){
	char a,b,c;
	a=getchar();
	if(a>=65&&a<=90){
		a+=32;
		printf("%c ",a);
	}else if(a>=97&&a<=122){
		a-=32;
		printf("%c ",a);
	}
	printf("%d",a);
	return 0;
}
