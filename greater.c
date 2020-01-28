#include<stdio.h>
void main(){
	int a,b;
	printf("enter 2 no.");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else{
		printf("%d is greater than %d",b,a);
	}
}
