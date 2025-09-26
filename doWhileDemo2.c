#include<stdio.h>
int main()
{
	int option,num1,num2,result;
	char choice;
	do
	{
		printf("1. Addition\n2. Subtraction\n3. Mulitiplication\n4. Division\n5. Mod\n");
		printf("Enter your Option(1-5)\n");
		scanf("%d",&option);
		printf("Enter any two numbers\n");
		scanf("%d%d",&num1,&num2);
		
		switch(option)
		{
			case 1:
					result=num1+num2;
					printf("Sum = %d\n",result);
					break;
			case 2:
					result=num1-num2;
					printf("Diff = %d\n",result);
					break;
			case 3:
					result=num1*num2;
					printf("Product = %d\n",result);
					break;
			case 4:
					if(num2!=0)
					{
					   result=num1/num2;
					   printf("Division = %d\n",result);
				    }
					else
					   printf("Division is not Possible\n");
					break;
			case 5:
					if(num2!=0)
					{
						result=num1%num2;
						printf("Mod = %d\n",result);
					}
					else
					   printf("Mod is not possible\n");
					break;
			default:
					printf("Enter a valid optioin\n");
					break;
		}
		fflush(stdin);
		printf("Do you want to continue...(Y/N)?\n");
		scanf("%c",&choice);
		
	}while(choice=='Y' || choice=='y');
	printf("Thank you for using my simple Calculator\n");
	return 0;
}
