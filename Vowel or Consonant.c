// Define a program to identify a given letter is vowel or consonant
#include<stdio.h>
int main()
{
	char x;
	printf("Enter the letter");
	scanf("%c",&x);
	if(x=='a'|| x=='A' ||x=='e'|| x=='E'||x=='i'||x=='I'|| x=='o'||x=='O'|| x=='u'|| x=='U')
	{
		printf("The given input is a Vowel");
	}
	else
	{
		printf("The given input is a consonant");
	}
	return 0;
}
