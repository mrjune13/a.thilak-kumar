#include<stdio.h>
int main()
{
int a,b=0,c=0,d=0,e=0;
printf("enter the number");
scanf("%d",&a);
b=a;
while (b>0)
{
b=b/10;
c=c+1;
}
printf("no of digits %d",c);
while (c!=0)
{
d=d*10+1;
c=c-1;
}
e=a+d;
printf("%d",e);
return 0;
}

 
