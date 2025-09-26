#include<stdio.h>
int findDigitsCount(int);   // function prototype

int findDigitsCount(int n)  // function definition
{
	int digits=0;
	while(n>0)
	{
		int rem=n%10;
		digits++;
		n=n/10;
	}
	return digits;
}
int main()
{
	int n;
	scanf("%d",&n);
	int count=findDigitsCount(n);
	printf("No of Digits of a given number %d is: %d",n,count);
	return 0;
}






