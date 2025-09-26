#include<stdio.h>
#include<math.h>
int main()
{
	int n=27;
	printf("%d ",(int)cbrt(n));
	int c=(int)pow(n,1.0/4);
	//printf("%d",c);
	int d=(int)log10(n)+1;
	printf("%d",d);
	return 0;
}
