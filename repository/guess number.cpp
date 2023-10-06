#include<iostream>
#include<windows.h>
//#include<time.h>
using namespace std;
int main(){
	int a,b;
//	srand(time(NULL));
	a=rand()%100;
	cout<<"input:"; 
	while(1){
		cin>>b;
		if(b-a){
			if(b>a){cout<<"Less:";
			}else cout<<"More:";
		}else{
			cout<<"You are right";
			break;
		}
	}
	return 0;
}
