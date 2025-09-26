/*#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double sq;
	printf("Enter any number\n");
	scanf("%d",&n);
	sq=sqrt(n);
	printf("Square Root of %d is: %.2lf",n,sq);
	return 0;
}*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	char ch;
	float m;
	char str[20];
	scanf("%d",&n);
	fflush(stdin);
	scanf("%c%f%s",&ch,&m,str);
	printf("n = %d\n",n);

	printf("ch = %c\n",ch);
	printf("m = %f\n",m);
	printf("str = %s\n",str);
	return 0;
}
