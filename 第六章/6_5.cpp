#include <stdio.h>
void main()
{
	int i,b[10];
	for(i=0;i<=10;i++)
		scanf("%d",&b[i]);
	for(i=9;i>-1;i--)
		printf("%5d",b[i]);
	printf("\n");
}