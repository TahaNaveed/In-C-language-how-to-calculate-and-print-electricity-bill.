#include<stdio.h>
int main()
{
float units, bill, surcharge;
printf("Please Enter consumed Units:");
scanf("%f",&units);
if(units<=300)
{
   bill=units*3;
   printf("The Bill of %f units is %f",units,bill);
}
else
{
   bill=units*3.5;
   surcharge=bill*0.05;
   bill=bill+surcharge;
   printf("The Bill of %f units is %f",units,bill);
}
return 0;
}
