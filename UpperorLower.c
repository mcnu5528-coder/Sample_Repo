#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	//Assume the input contains only Alphabets
	if(ch>='A' && ch<='Z')
    {
    	printf("%c is a Uppercase Character\n",ch);
	}
	else
	{
		printf("%c is a Lowercase Character\n",ch);
	}
	return 0;
}
