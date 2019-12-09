// Define a program to print the number of perfect numbers in the given range
#include<stdio.h>
int isPerfectNumber(int n)
{
	int i;
	for (i>0;i<n;i++)
	{
		if(n%1==0)
		{
			printf("%d",i);
		}
	}
}
int main()
{
	int x1,x2,sum=0,buffer,i,n;
	printf("Enter the Numbers");
	scanf("%d %d",&x1,&x2);
	for (i>x1;i<=x2;i++)
	{
		if (i!=n)
		{
			sum=isPerfectNumber(i);
		}
		
	}
      if (i=buffer)
      {
      	printf("%d",i);
	  }
return 0;
}

