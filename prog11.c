#include<stdio.h>
void main()
{
int ndays,weeks,months,years;
printf("enter the numberof days\n");
scanf("%d",&ndays);
years=ndays/365;
weeks=(ndays%365)/7;
months=ndays/30;
printf("years %d\n" ,years);
printf("months %d\n" ,months);
printf("weeks %d\n" ,weeks);
}
