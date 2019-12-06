// Define a program to print the output as the square of the 2nd number if the 1st number is larger and vice versa
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the values of x,y");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		printf("%d",y*y);
	}
	else
	{
		printf("%d",x*x);
	}
	return 0;
}
