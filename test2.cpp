#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i=1;
	float a=1,b=1;
//	/*
	while((1/b)>=1e-12){
		a+=(1/b),b*=(i++);
		cout<<setprecision(10)<<a<<" "<<b<<endl;
	}
//	*/
	cout<<endl;
	i=1,a=1,b=1;
	while(b>=1e-12){
		a+=b,b/=(i++);
		cout<<setprecision(10)<<a<<" "<<1/b<<endl;
	}
//	cout<<a;
	return 0;
}
