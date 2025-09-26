#include<stdio.h>
int main()
{
  int units;
  double bill,surcharge,tot_bill;
  scanf("%d",&units);
  if(units<=50)    // 0 - 50
  {
     bill=units*0.50;
  }
  else if(units>50 && units<=150)  //51 - 150
  {
     bill  = 50 * 0.50 + (units-50) * 0.75;
  }
  else if(units>150 && units<=250)   // 151 - 250
  {
     bill=50*0.50 + 100 * 0.75 + (units-150) * 1.20;
  }
  else    // >250
  {
    bill=50*0.50 + 100 * 0.75 +  100*1.20 + (units-250)*1.50;
  }
  tot_bill = bill + 0.2*bill;
  printf("No of Units = %d\n",units);
  printf("Bill = %.2lf\n",bill);
  printf("Net Bill = %.2lf\n",tot_bill);
  return 0;
}
