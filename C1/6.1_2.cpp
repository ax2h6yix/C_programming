#include<iostream>
using namespace std;
int main(){
	int k=4,n;
	for(n=0;n<k;n++){
		if(n%2==0)continue;
		k--;
	}
	cout<<"k="<<k<<" n="<<n;
	return 0;
}
