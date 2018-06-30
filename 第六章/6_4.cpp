#include <stdio.h>
void main()
{
	static int a[5]={1,4,5,6,7};
	int i,t,b;
	scanf("%d",&b);
	for(i=0;i<5;i++)
	{if(b<=a[i])
	{t=a[i];a[i]=b;b=t;}
	printf("%d",a[i]);}
	printf("%d",b);
}