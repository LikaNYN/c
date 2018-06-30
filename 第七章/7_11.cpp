#include <stdio.h>
int paixu(x)
int x[];
{int i,j,t;
for(j=1;j<10;j++)
for(i=0;i<=9-j;i++)
if(x[i]>x[i+1])
{t=x[i+1];x[i+1]=x[i];x[i]=t;}
}
main()
{
	int y[10];
	int i;
	for(i=0,i<1;i++)
		scanf("%d",&y[i];
	paixu(y);
	for(i=0;i<10;i++)
		printf("%5d",y[i]);
	printf("\n");
}