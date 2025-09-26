#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	double d,r1,r2;
	scanf("%lf%lf%lf",&a,&b,&c);  //Reading of input
	d=b*b-4*a*c;  				 //decriminent value
	if(d==0)
	{       
		printf("Roots are Equal\n");
		r1=-b/(2*a);
		r2=-b/(2*a);
	}
	else if(d>0)
	{
		printf("Roots are Real Numbers\n");
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
	}
	else 
	{
		printf("Roots are imaginary\n");
	}
	
	printf("Root1 = %.2lf\n",r1);
	printf("Root2 = %.2lf\n",r2);
	
   return 0;
}
