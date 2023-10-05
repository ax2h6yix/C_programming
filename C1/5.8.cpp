#include<stdio.h>
int main(){
	char a;
	a=getchar();
	if(a==32){
		printf("Is space");
	}else if(a>='0'&&a<='9'){
		printf("Is number");
	}else if(a>=65&&a<=90){
		printf("Is Captial");
	}else if(a>=97&&a<=122){
		printf("Is Lower");
	}else printf("Is other");
	return 0;
}
