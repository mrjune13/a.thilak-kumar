#include <stdio.h>
int main()
{
int n,t,sum=0,reminder;
printf("enter the five digit number");
scanf("%d", &n);
t=n;
while (t!=0)
{
reminder = t%10;
sum= sum+reminder;
t=t/10;
}
printf("sum of digits = %d\n", sum);
}

