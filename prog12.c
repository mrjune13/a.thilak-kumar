#include<stdio.h>
int main()
{
int n,rem,rev=0;
printf("enter a 5 digit number:");
scanf("%d", &n);
while (n!=0)
{
rem= n%10;
rev= (rev*10)+rem;
n= n/10;
}
printf("reverse number=%d/n", rev);
return 0;
}

