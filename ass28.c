//write a program which accept number from user and count frequency of 2 in it
#include<stdio.h>
int factor(int num)
{
int digit,count;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
if(digit==2)
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
ret=factor(ivalue);
printf("%d",ret);
return 0;
}
