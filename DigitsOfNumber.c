// Define a program to print the digits of a number
#include<stdio.h>
int main()
{
	int x,r=0;
	printf("Enter the number");
	scanf("%d",&x);
	while(x!=0)
	{
		r=x % 10;
		x=x / 10;
		switch(r)
		{
			case 0 : printf("Zero ");
				break;
			case 1 : printf("One ");
			    break;
			case 2 : printf("Two ");
			    break;
			case 3 : printf("Three ");
			    break;
			case 4 : printf("Four ");
			    break;
			case 5 : printf("Five ");
				break;
			case 6 : printf("Six ");
				break;
			case 7 : printf("Seven ");
				break;
			case 8 : printf("Eight ");
				break;
			case 9 : printf("Nine ");
				break;	    
		}
	}
	return 0;
}