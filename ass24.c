//accept number from user and return summation of all its non factor
#include<stdio.h>
int factor(int num)
{
int i;
int sum=0;
if(num<=0)
{
num=-num;
}
for(i=1;i<=num;i++)
{
if(num%i!=0)
{
printf("%d \n",i);
sum=sum+i;
}
}
return sum;
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
