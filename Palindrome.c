// Define a program to find a number is palindrome or not
#include<stdio.h>
int main()
{
	int x,r,p;
	printf("Enter the Number");
	scanf("%d",&x);
	while(x!=0)
	{
		r=x % 10;
		x=x / 10;
	}
	x=p;
	if(r=p)
	{
		printf("The number is a Palindrome");
	}
	else 
	{
		printf("The number is not a Palindrome");
	}
	return 0;
}
