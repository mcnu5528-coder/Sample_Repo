#include<stdio.h>
int main()
{
	int  salary;
	double hra,da,gs;
	scanf("%d",&salary);
	if(salary<=10000)
	{
		hra=0.2*salary;
		da=0.80*salary;
	}
	else if(salary>10000 && salary<=20000)
	{
		hra=0.25*salary;
		da=0.9*salary;
	}
	else
	{
		hra=0.3*salary;
		da=0.95*salary;
	}
	gs=salary+hra+da;
	printf("Basic Salary = %d\n",salary);
	printf("HRA = %.2lf\n",hra);
	printf("DA = %.2lf\n",da);
	printf("Gross Salary = %.2lf",gs);
	return 0;
	
	
	
	
}
