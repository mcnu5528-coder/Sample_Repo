#include<stdio.h>
int main()
{
	float a,b,c,sum;
	
	printf("Enter angles of the Triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	
	sum=a+b+c;
	if(sum==180)
	{
		printf("It is a Valid Triangle");
	}
	else
	{
		printf("It's not a Valid Triangle");
	}
	return 0;
}
