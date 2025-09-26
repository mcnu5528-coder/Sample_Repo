#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int digits= (int)log10(n)+1;
	printf("No of digits of a given Number %d is: %d",n,digits);
	return 0;
}
