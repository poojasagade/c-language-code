//accept the number from user and check whether it contains 0 in it or not
#include<stdio.h>
#include<stdbool.h>
bool zero(int num)
{
int digit;
while(num!=0)
{
digit=num%10;
if(digit==0)
{
return true;
}
else
{
return false;
}
num=num/10;
}
}
int main()
{
int ivalue;
bool iret;
printf("enter the number");
scanf("%d",&ivalue);
iret=zero(ivalue);
if(iret==true)
{
printf("it contain zero");
}
else
{
printf("there is no zero");
}
return 0;
}
