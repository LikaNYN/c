#include <stdio.h>
int main()
{
	int grade;
	printf("Please enter your score.\n");
	scanf("%d", &grade);
	if (grade>=90)  printf("Your level is A.\n");
	else if(grade>=80)  printf("Your level is B.\n");
	else if(grade>=70)  printf("Your level is c.\n");
	else if(grade>=60)  printf("Your level is D.\n");
	else printf("Your level is E.\n");
	return 0;
} 
