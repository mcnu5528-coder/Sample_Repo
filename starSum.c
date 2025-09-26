#include<stdio.h>
#include<math.h>
int starSumRange(int N)
 {
    int count=0,i,j;
    for(i=1;i<=N;i++)
    {
          int sum=0;
          int d=(int)log10(i)+1;
          if(d>1)
           {

              for(j=1;j<=d;j++)
              {
                 sum=sum+i%(int)pow(10,j);
              }
              if(sum>N)
              {
                   count++;
                   
              }
          }
    }     
    return count;

 }
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int count=starSumRange(n);
 	printf("%d",count);
 	return 0;
 }

