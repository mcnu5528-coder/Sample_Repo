#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=2*n-1;j>=1;j--)
		{
			if(j>2*i-1)
			  printf("  ");
			else
			 printf("* ");
		}
		printf("\n");  //control move to the next line
	}
	return 0;
}
