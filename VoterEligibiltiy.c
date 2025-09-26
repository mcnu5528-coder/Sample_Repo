#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter your Age:\n");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Hi! You are eligible for Voting\n");
		printf("Thank you for using my applicaiton\n");
	}
	else
	{
		printf("Sorry! You are not eligible for Voting\n");
		printf("You need to wait %d more years to get the vote\n",18-age);
	}
	
	
	
	
	
	return 0;
}
