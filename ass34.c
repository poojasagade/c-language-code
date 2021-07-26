//accept the number from user and return the multiplication of all digits
#include<stdio.h>
int mult(int num)
{
int digit;
int mul=1;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
mul=mul*digit;
num=num/10;
}
return mul;
}
int main()
{
int ivalue=0;
int ret=0;
printf("Enter the number");
scanf("%d",&ivalue);
ret=mult(ivalue);
printf("%d",ret);
return 0;
}
