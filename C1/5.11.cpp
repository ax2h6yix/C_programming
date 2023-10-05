#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void checkerr(char a,char b,char c);
double cacu(char a,char b,char c,int d,int e);
int main(){
	char sex,sports,diet;
	int faHeight,moHeight;
	printf("Your sex is(F/M):\nDo you like sports(Y/N):\nHave you has a good diet(Y/N):\nfather's height:\nmother's height:\n");
	scanf("%c %c %c %d %d",&sex,&sports,&diet,&faHeight,&moHeight);
	checkerr(sex,sports,diet);
	printf("your expect height is:%.2f",cacu(sex,sports,diet,faHeight,moHeight));
	return 0;
}
void checkerr(char a,char b,char c){
	int err=0;
	if(a!='F'&&a!='M'){
		printf("input sex error\n");
		err=1;
	}
	if(b!='N'&&b!='Y'){
		printf("input interest error\n");
		err=1;
	}
	if(c!='N'&&c!='Y'){
		printf("input diet error\n");
		err=1;
	}
//	printf("\ntest notice:\nsex:%c sports:%c diet:%c\n",a,b,c);
	if(err)exit(0);
}

double cacu(char a,char b,char c,int d,int e){
	double base;
	if(a=='F')base=(d*0.923+e)/2;
	else base=(d+e)*0.54;
	printf("\nbase height:%.2f\n",base);
	if(b=='Y')base*=1.02;
	if(c=='Y')base*=1.015;
	return base;
}

/*

F Y Y 234 432

*/
