#include<iostream>
using namespace std;
int main(){
	char space=' ';
	for(int i=0;i<4;i++){
		for(int j=0;j<=i;j++)printf("%c",space);
		for(int k=0;k<6;k++)printf("*");
		cout<<endl;
	}
	return 0;
}
