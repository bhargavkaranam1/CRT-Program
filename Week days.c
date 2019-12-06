// Define a program to identify the week day by the week number
#include<stdio.h>
int main()
{
	int weeknumber;
	printf("Enter the week number");
	scanf("%d",&weeknumber);
	switch(weeknumber)
	{
		case 1 :
		printf("Sunday");
		break;
		case 2 :
		printf("Monday");
		break;
		case 3 :
		printf("Tuesday");
		break;
		case 4 : 
		printf("Wednesday");
		break;
		case 5 :
		printf("Thursday");
		break;
		case 6 : 
		printf("Friday");
		break;
		case 7 : 
		printf("Saturday");
		break;
		default : 
		printf("Enter a valid input");
		break;
	}
	return 0;
}
