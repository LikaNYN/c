#include <stdio.h>
main()
{
	long m,n,i=1,j,s;
	scanf("%ld,%ld",&m,&n);
	for(;i<=m&&i<=n;i++)
	{if(m%i==0&&n%i==0)s=i;}
	if(m>=n)j=m;
	else j=n;
	for(;!(j%m==0&&j%n==0);j--);
	printf("s=%ld j=%ld\n",s,j);
}

