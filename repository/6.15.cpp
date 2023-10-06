#include<stdio.h>
#include<math.h>
int main(){
	int a=98;
	for(int i=0;i<=98;i++){
		if(i*4+(a-i)*2==386){
			printf("ผฆ%d อร%d",(a-i),i);
			break;
		}
	}
	return 0;
}
