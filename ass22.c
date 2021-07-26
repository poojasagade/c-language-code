//Write a program which accept number from user and display its factors in decreasing order
#include<stdio.h>
int mult(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=num;i>=0;i--)
{
if(num%i==0)
{
printf("%d \n",i);
}
}
return i;
}
int main()
{
int ivalue=0;
int ret;
printf("Enter the number");
scanf("%d",&ivalue);
ret=mult(ivalue);
printf("%d \n",ret);
return 0;
}
