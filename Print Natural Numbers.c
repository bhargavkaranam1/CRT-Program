// Define a program to read a number and print the natural numbers upto the number
#include<stdio.h>
int main()
{
	int x,i;
	i=1;
	printf("Enter the numbers to be printed");
	scanf("%d",&x);
	while(i<=x)
	{
		printf("%d ",i);
		i=i+1;
	}
	return 0;
}
