#include"stdio.h"
#include<math.h>
int main(){
	double a;
	scanf("%lf",&a);
	a=fabs(a);
//	if(a<0)a=-a;
	printf("%.0llf",a);
	return 0;
}
