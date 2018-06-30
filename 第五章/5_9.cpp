#include <stdio.h>
main()
{
	int m,i,j,s;
	for(m=6;m<10000;m++)
	{s=1;
	for(i=2;i<m;i++)
		if(m%i==0)s=s+i;
		if(m-s==0)
		{printf("%5d its factors are 1",m);
		for(j=2;j<m;j++)
			if(m%j=0)
				printf("%d\n",j);
		}
}