//write a program which accept number from user and display its non factor
#include<stdio.h>
void factor(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=1;i<=num;i++)
{
if(num%i!=0)
{
printf("%d \n",i);
}
}
}
int main()
{
int ivalue=0;
printf("Enter the number");
scanf("%d",&ivalue);
factor(ivalue);
return 0;
}
