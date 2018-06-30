#include <stdio.h>
main()
{
	int i=1,n;
	double t,x=1,y=2,s,sum=0;
	scanf("%ld",&n);
	while(i<=n)
	{s=y/x;
	sum=sum+s;
	t=y;
	y=y+x;
	x=t;
	i++;}
	printf("%f\n",sum);
}
