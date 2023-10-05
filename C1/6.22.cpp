#include<stdio.h>
#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;
void p1();
void p2();
void p3();
int main(){
	p1(),p2(),p3();
	return 0;
}

void p1(){
	unsigned long long a=0;
	for(int i=0;i<63;i++){
		a+=pow(2,i);
	}
	a+=9223372036854775808;
	cout<<"以unsigned long long int输出2^63+9223372036854775808(2^63)"<<endl;
	printf("%llu",a);
	cout<<endl<<a<<endl;
	cout<<"以unsigned long long int输出2^63-1+2^63"<<endl;
	a=pow(2,63)-1+pow(2,63);
	printf("%llu",a);
	cout<<endl<<a<<endl;
	cout<<"以unsigned long long int输出2^64"<<endl;
	a=pow(2,64);
	printf("%llu",a);
	cout<<endl<<a<<endl;
}
void p2(){
	double a=0,b=1;
	for(int i=0;i<64;i++){
		a+=b,b*=2;
	}
	cout<<endl<<"以double使用printf函数输出2^64"<<endl;
	printf("%f\n",a);
	cout<<"以double使用cout函数输出2^64"<<endl;
	cout<<fixed<<a<<endl<<endl;
}
void p3(){
	long double a=pow(2,64);
	cout<<"以long double使用printf函数输出2^64"<<endl;
	printf("%Lf\n",a);
	cout<<"以long double使用cout函数输出2^64"<<endl;
	cout<<fixed<<a;
}
