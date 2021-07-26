//accept the number from user and return difference between summation of even digits and summation of odd digits
#include<stdio.h>
int diff(int num)
{
int digit,sum1=0,sum2=0;
int dif;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
if(digit%2==0)
{
sum1=sum1+digit;
}
else
{
sum2=sum2+digit;
}
num=num/10;
dif=sum1-sum2;
}
return dif;
}
int main()
{
int ivalue=0;
int ret=0;
printf("Enter the number");
scanf("%d",&ivalue);
ret=diff(ivalue);
printf("%d",ret);
return 0;
}
