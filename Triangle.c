// Define a program to check the angles to construct a triangle
#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter the angles");
	scanf("%d %d %d",&a1,&a2,&a3);
	if(a1>0 && a2>0 && a3>0 && a1+a2+a3==180)
	{
		printf("the triangle can be constructed");
	}
	else
	{
		printf("The triangle can't be constructed");
	 } 
	return 0;
}
