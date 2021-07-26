//accept number from user and count frequency of such  a digit are less than 6
#include<stdio.h>
int count(int num)
{
int digit,cnt;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
if(digit<6)
{
cnt++;
}
num=num/10;
}
return cnt;
}
int main()
{
int ivalue=0;
int ret=0;
printf("Enter the number");
scanf("%d",&ivalue);
ret=count(ivalue);
printf("%d",ret);
return 0;
}
