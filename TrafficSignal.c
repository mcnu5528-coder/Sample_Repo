#include<stdio.h>
int main()
{                           
	char color_Code;
	
	scanf("%c",&color_Code);
	switch(color_Code)
	{
		case 'R':
			printf("STOP......");
			break;
		case 'Y':
			printf("SLOW DOWN.....");
			break;
		case 'G':
			printf("GO......");
			break;
		default:
			printf("Enter Valid Color Code");
			break;
	}
	return 0;
}
