#include<stdio.h>
int  main()
{
	int n1,n2,res;
	char op;
	printf("+ - Addition\n- - Subtraction\n* - Multiplication\n/ - Division\n%% - Modulus\n");
	printf("Enter your Choice\n");
	scanf("%c",&op);
	printf("Enter any two numbers\n");
	scanf("%d%d",&n1,&n2);
	switch(op)
	{
		case '+':
				res=n1+n2;
				break;
		case '-':
				res=n1-n2;
				break;
		case '*':
				res=n1*n2;
				break;
		case '/':
				if(n2!=0)
				{
					res=n1/n2;
				}
				else
				{
					printf("Division is not possible");
					res=0;
				}
				break;
		case '%':
				if(n2!=0)
				{
					res=n1%n2;
				}
				else
				{
					printf("Modulus is not possible");
					res=0;
				}
				break;
		default:
				printf("Enter a valid Operator\n");
				break;
	}
	printf("Result = %d\n",res);
	return 0;
}
