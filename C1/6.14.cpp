#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e;
	for(int i=1;i<18;i++){
		for(int j=1;j<26;j++){
			if(!(2*i+j-20))printf("male=%d female=%d child=%d\n",i,j,(30-i-j));
		}
	}
	return 0;
}
