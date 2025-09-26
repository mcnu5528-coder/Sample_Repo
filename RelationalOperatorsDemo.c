#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	
	printf("%d == %d => %d\n",x,y,x==y);
	printf("x > y => %d\n",x>y);
	printf("x >= y => %d\n",x>=y);
	printf("x < y => %d\n",x<y);
	printf("x <= y => %d\n",x<=y);
	printf("x != y => %d\n",x!=y);
	
	return 0;
}
