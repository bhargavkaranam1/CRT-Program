// Define a program to print the output as yes if the individual digit factorial sum is equal to the number else print no
#include<stdio.h>
int factorial(int x)
{
	int i,fact=1;
	for (i=x;i>0;i--)
	{
		fact *=i;
	}
	return fact;
}
int main()
{
	int n,sum=0,r,buffer;
	printf("Enter the number");
	scanf("%d",&n);
	buffer=n;
	while (n!=0)
	{
		r=n%10;
		sum = sum + factorial(r);
	    n/=10;
	}
	if(sum==buffer)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
