#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c=0;
	scanf("%d %d",&a,&b);
	((a%4==0&&a%100!=0)||a%400==0)?c=1:c=0;
	switch(b){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30");
			break;
		case 2:
			if(c){
				printf("29");
			}else printf("28");
			break;
	}
	return 0;
}
