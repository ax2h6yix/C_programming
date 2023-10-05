#include<stdio.h>
#include<math.h>
int main(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(i==j)continue;
			int a,b;
			double c,d;
			c=sqrt(i*1000+i*100+j*10+j);
			if((c-(int)c)<1e-9)printf("%d%d%d%d",i,i,j,j);
			
		}
	}
	return 0;
}
