#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e;
	for(int i=0;i<21;i++){
		for(int j=0;j<35;j++){
			if(!(5*i+3*j+(100.0-i-j)/3-100))printf("Achicken=%d Bchicken=%d Cchicken=%d\n",i,j,(100-i-j));
		}
	}
	return 0;
}
