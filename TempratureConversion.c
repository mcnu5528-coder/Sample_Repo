#include<stdio.h>
int main()
{
	double C,F,K;
    int option;	
	printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n
	3. Celsius to Kelvin\n");
	printf("Enter your choice(1 - 3)\n");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			    printf("Enter the Celsius Value\n");
			    scanf("%lf",&C);
			    // F = (C * 9/5)+32
			    F=(double)(C*9)/5 + 32;
			    printf("C = %.2lf and F = %.2lf\n",C,F);
			    break;
		case 2:
			    printf("Enter the Fahrenheit value\n");
			    scanf("%lf",&F);
			    C = (F-32) * 5.0/9;  
				printf("F = %.2lf and C = %.2lf\n",F,C);
				break;
		case 3:
			    printf("Enter the Celsius value\n");
			    scanf("%lf",&C);
			    K=C+273.15;
			    printf("C = %.2lf and K = %.2lf",C,K);
			    break;
		default:
			    printf("Enter a valid Option\n");
			    break;
	
	}
}
