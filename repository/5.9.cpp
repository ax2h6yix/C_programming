#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	char grade;
	scanf("%d",&a);
	if(a<=100&&a>=90){
		grade='A';
	}else if(a<90&&a>=80){
		grade='B';
	}else if(a<80&&a>=70){
		grade='C';
	}else if(a<70&&a>=60){
		grade='D';
	}else if(a>=0&&a<60){
		grade='E';
	}else{
		printf("error");
		exit(0);
	}
	printf("%c",grade);
	return 0;
}
