#include<stdio.h>
#include<math.h>
typedef long long ll;
int main(){
	int n=1;
	float term=1.0,sign=1,sum=0;
	while(fabs(term)>=1e-4){
		term=sign/n;
		sum+=term;
		sign=-sign;
		n++;
	}
	printf("sum=%f\n",sum);
	return 0;
}
