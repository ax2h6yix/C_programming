#include<stdio.h>
#include<math.h>
int main(){
	//p1
	int a[150]{},cnt=0;
	for(int i=1;i<=21;i++){
		a[i*5-1]=1,a[i*6-1]=1,a[i*7-1]=1;
	}
	for(int i=0;i<150;i++){
//		printf("%d ",a[i]);
		if(a[i])cnt++;
	}
	printf("%d",cnt);
	
	//p2
	int cnt1=0;//t_min=5*21,t_mid=6*21,t_max=7*21
	for(int i=1;i<=105;i++){
		if((i%5==0)||(i%6==0)||(i%7==0))cnt1++;
	}
	for(int i=106;i<=126;i++){
		if((i%6==0)||(i%7==0))cnt1++;
	}
	for(int i=127;i<=147;i++){
		if(i%7==0)cnt1++;
	}
	printf("\n%d",cnt1);
	
	//p3
	int cnt2=0;
	for(int i=1;i<=147;i++)if(((i%5==0)&&(i<=105))||((i%6==0)&&(i<=126))||(i%7==0))cnt2++;
	printf("\n%d",cnt2);
	
	return 0;
}
