//  Define a program to take input as the range of numbers and give the output as the number of even palindromes
#include<stdio.h>
int isPalindrome(int n)
{
	int rev=0,buffer=n;
	while(n!=0)
	{
		rev=rev*10+(n%10);
		n/=10;
	}
	if (buffer==rev)
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
	int i,a1,a2,res,pCnt=0;
	printf("Enter the Range of values");
	scanf("%d %d",&a1,&a2);
	for(i=a1;i<=a2;i++)
	{
		if (i%2==0)
		{
			res= isPalindrome(i);
			if(res==1)
			{
				pCnt++;
			}
		}
	}
	printf("%d",pCnt);
	return 0;
}
