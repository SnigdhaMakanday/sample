#include<stdio.h>
void main(){
	int a,b,s,d,m,div;
	printf("enter 2 no.");
	scanf("%d%d",&a,&b);
	s=add(a,b);
	printf("sum=%d",s);
}
int add(int a,int b)
{
	int s;
	s=a+b;
	return(s);
}
