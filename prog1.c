#include<stdio.h>
int main()
{
int  a,b;
printf("entervalue of  a ");
scanf("%d",&a);
printf("enter value of  b ");
scanf("%d",&b);
int temp = a;
a=b;
b=temp;
printf("\nAfter Swapping, a= %d, y=%d",a, b);
}
