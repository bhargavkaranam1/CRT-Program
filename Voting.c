// Define a program to take the input as the age of the person and give the output as Eligible or Non-Eligible
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age of the person");
	scanf("%d",&age);
	if(age>18 && age<85)
	{
		printf("The person is elegible for voting");
	}
	else
	{
		printf("The person is not eligible for voting");
	}
	return 0;
}
