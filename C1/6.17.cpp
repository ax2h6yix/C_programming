#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e;
	for(int i=1;i<11;i++){
		for(int j=1;j<21;j++){
			if(!(10*i+5*j+(50-i-j)-100))printf("10yuan=%d 5yuan=%d 1yuan=%d\n",i,j,(50-i-j));
		}
	}
	return 0;
}
