#include<stdio.h>
int main()
{
	int x,r=0,s=0;
	printf("Enter the number");
	scanf("%d",&x);
	while(x!=0)
	{
		r=x % 10;
		if(r == 8)
		{
			s+=2;
		}
		else if(r == 0 || r == 6 || r==9 )
		{
			s+=1;
		}
		else if(r == 4)
		{
			s+=2;
		}
		x=x / 10;
    }
    printf("%d",s);
    return 0;
}
