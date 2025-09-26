#include<stdio.h>
int main()
{
	char code;
	scanf("%c",&code);
	switch(code)
	{
		case 'V':
		case 'v':
			printf("Violet");
		
		case 'I':
		case 'i':
			printf("Indigo");
			
		case 'B':
		case 'b':
			printf("Blue");
			break;
		case 'G':
		case 'g':
			printf("Green");
			break;
		case 'Y':
		case 'y':
			printf("Yellow");
			break;
		case 'O':
			printf("Orange");
			break;
		case 'R':
		case 'r':
			printf("Red");
			break;
		default:
			printf("Enter a valid Color Code");
			break;
	}
	return 0;
}
