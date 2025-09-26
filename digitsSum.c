/*Sum of digits of a given number */
#include<stdio.h>
int digits_Sum(int);  //function prototype
int main()
{
	int n,sum;
	scanf("%d",&n);
	sum=digits_Sum(n);
	printf("Sum of the digits of a given number %d is %d",n,sum);
	return 0;
}
int digits_Sum(int m)
{
	int s=0,rem;
	while(m>0)
	{
		rem=m%10;
		s=s+rem;
		m=m/10;
	}
	return s;
}

