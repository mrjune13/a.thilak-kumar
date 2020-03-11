#include<stdio.h>
#include <math.h>

int main()
{

float principal, rate, time, emi;


printf("enter principal: \n");
scanf("%f" ,&principal);

printf("enter rate: \n");
scanf("%f" ,&rate);

printf("enter time duration: \n");
scanf("%f" ,&time);

rate=rate/(12*100); /*one month intrest*/

time=time*12; /*one month period*/


emi= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1); 

printf("monthly emi is= %f\n",emi);

return 0;

}
