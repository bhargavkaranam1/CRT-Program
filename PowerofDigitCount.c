// Define a program to print the output as the sum of digits to the power of number of digits
#include<stdio.h>
#include<math.h>

int countDigits(int n)
{
	int cnt=0;
	while(n!=0)
	{
		cnt++;
		n=n/10;
	} 
    return cnt;
}
int main()
{
	int a,i,sum=0,r,b;
	printf("Enter the number");
	scanf("%d",&a);
	b=countDigits(a);
	while (a!=0)
	{
		r=a%10;
		a=a/10;
	    sum =sum + pow (r,b);
	}
    printf("%d ",sum);
	return 0;
}
