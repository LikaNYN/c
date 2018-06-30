double qigen(s,t,u,v)
int s,t,u,v;
{
	double x,y;
	x=1;
	do
	{y=s*x*x*x+t*x*x+u*x+v;
	x=x-y/(3*s*x*x+2*t*x+u);}
	while(y!=0);
	return x;
}
main()
{
	int a,b,c,d;
	double x;
	scanf("%d,%d,%d,%d".&a,&b,&c,&d);
	x=qigen(a,b,c,d);
	printf("x=%.3f\n",x);
}
