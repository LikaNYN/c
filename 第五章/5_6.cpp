#include <stdio.h>
main()
{
	int n,i=1;
	long sum=0,s=1;
	scanf("%d",&n);
	while(i<=n)
	{s=s*i;sum=sum+s;i++;}
	printf("sum=%d\n",sum);
	return 0;
}