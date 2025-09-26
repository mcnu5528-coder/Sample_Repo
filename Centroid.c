#include<stdio.h>
int main()
{
  float sub1,sub2,sub3,sub4,sub5,total,avg_marks,percentage;
  
  printf("Enter Five Subject Marks\n");
  scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
  
  total=sub1+sub2+sub3+sub4+sub5;
  
  avg_marks = total/5;
  percentage=total/500*100;
  
  printf("Sub1 Marks: %.2f\n",sub1);
  printf("Sub2 Marks: %.2f\n",sub2);
  printf("Sub3 Marks: %.2f\n",sub3);
  printf("Sub4 Marks: %.2f\n",sub4);
  printf("Sub5 Marks: %.2f\n",sub5);
  
  printf("Average Marks  = %.2f\n",avg_marks);
  printf("Percentage is %.2f%\n",percentage);
  return 0;
}

