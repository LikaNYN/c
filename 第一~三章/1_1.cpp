#include <stdio.h>
#define PI 3.1415926
float main()
{
	float r,s;
	printf("Please enter a number.\n");
	scanf("%f",&r);
	s=PI*r*r;
	printf("%f\n%f\n%f",r,PI,s);
	return 0;

}
