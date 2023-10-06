#include<stdio.h>
int main(){
	char a,b;
	int c;
	for(int i=0;i<4;i++){
		scanf("%c%*c%c%*c%d",&a,&b,&c);
//		scanf("%c,%c,%d",&a,&b,&c);
		printf("%c,%c,%d\n",a,b,c);
		getchar();
	}
	return 0;
}
/*
1,2,34
1 2 34
1
2
34
1	2	34

*/
