//accept the number from user and return the count of even digit
#include<stdio.h>
int counts(int num)
{
int digit,count;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
if(digit%2==0)
{
count++;
}
num=num/10;
}
return count;
}
int main()
{
int ivalue=0;
int ret=0;
printf("Enter the number");
scanf("%d",&ivalue);
ret=counts(ivalue);
printf("%d",ret);
return 0;
}
