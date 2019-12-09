#include<stdio.h>
int primeNumber(int n)
{
	int i,flag=0;
	for (i=2;i<=(n/2);i++)
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
	}
	
	if (flag==0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int main()
{
	int n1,n2,i,res;
	printf("Enter the Numbers");
	scanf("%d%d",&n1,&n2);
	for (i=n1;i<=n2;i++)
	{
		res = primeNumber(i);
		if(res==1)
		{
			printf("%d",i);
		}
	}
	return 0;
}
