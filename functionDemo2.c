#include<stdio.h>
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int res1=addition(x,y);
	int res2=subtraction(x,y);
	int res3=multiplication(x,y);
	int res4=division(x,y);
	printf("Sum = %d\n",res1);
	printf("Difference = %d\n",res2);
	printf("Multiplication = %d\n",res3);
	printf("Division = %d\n",res4);
	return 0;
}
int division(int m,int n)
{
	return m/n;
}
int multiplication(int m,int n)
{
	int mul=m*n;
	return mul;
}
int subtraction(int m,int n)
{
	int diff=m-n;
	return diff;
}
int addition(int m,int n)
{
	int sum=m+n;
	return sum;
}
