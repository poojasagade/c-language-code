//accept number from user and display its factor in decreasing order
//input:12
//output:6 4 3 2 1
#include<stdio.h>
void factor(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=num;i>=1;i--)
{
if(num%i==0)
{
printf("%d \n",i);
}
}
}
int main()
{
int ivalue;
printf("enter the number");
scanf("%d",&ivalue);
factor(ivalue);
return 0;
}
