#include<stdio.h>
int reverse(int);
int main()
{
	int n;
	scanf("%d",&n);
	int rev=reverse(n);
	printf("Reverse Number = %d\n",rev);
	if(n==rev)
	{
		printf("PALINDROME");
	}
	else
	{
		printf("NOT A PALINDROME");
	}
	return 0;
}
int reverse(int n)
{   int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	return sum;
}
