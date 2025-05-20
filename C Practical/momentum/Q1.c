// Write C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
#include<conio.h>
void main()
{
	char n;
	printf("enter anything:");
	scanf("%c",&n);
	if(n>='a'&&n<='z'|| n>='A'&&n<='Z')
	printf("it is alphabet");
	else if(n>='1'&&n<='9')
	printf("it is digit");
	else
	printf("it is special character");
	
}
