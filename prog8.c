#include<stdio.h>
void main()
{
int basic,ha,da,gross;
printf("enter the basic salary of a person");
scanf("%d",&basic);
da=basic*20/100;
ha=basic*40/100;
gross=basic+ha+da;
printf("gross salary of a person is %d\n",gross);
}
