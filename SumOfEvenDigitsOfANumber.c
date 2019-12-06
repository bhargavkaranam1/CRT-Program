// Define a program to add the even digits of a number
#include<stdio.h>
int main()
{
	int x,r=0,sum=0;
	printf("Enter the number");
	scanf("%d",&x);
	while(x!=0)
	{
		r=x % 10;
		
		if(r%2==0)
		{
			sum=sum+r;
		}
		x=x / 10;
		
	}
	printf("%d",sum);
	return 0;
}
