#include <stdio.h>
main()
{
	int i=1,sum=0;

	for(;i<=10;sum=2*sum+1,i++);
	printf("sum=%d\n",sum);
	return 0;
}
