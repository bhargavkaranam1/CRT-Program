// Define a program to print the sum of even numbers upto a given number
#include<stdio.h>
int main()
{
	int x,i,sum;
	i=1;
	sum=0;
	printf("Enter the number of terms");
	scanf("%d",&x);
	while(i<=x)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
		
	}
	printf("%d ",sum);
	return 0;
}
