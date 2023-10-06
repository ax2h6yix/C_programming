#include<stdio.h>
#include<math.h>
void op();
int main(){
	//1
	op();
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++)printf("%3d",i*j);
		printf("\n");
	}
	printf("\n");
	//2
	op();
	for(int i=1;i<10;i++){
		for(int j=1;j<=i;j++)printf("%3d",i*j);
		printf("\n");
	}
	printf("\n");
	
	//3
	op();
	for(int i=1;i<10;i++){
		for(int j=1;j<i;j++)printf("   ");
		for(int j=i;j<10;j++)printf("%3d",i*j);
		if(i-9)printf("\n");
	}
	return 0;
}
void op(){
	for(int i=1;i<10;i++){
		printf("%3d",i);
	}
	printf("\n");
	for(int i=1;i<10;i++){
		printf("  -");
	}
	printf("\n");
}
