/*accpet the number from user and display its non factor
input:12
output:5 7 8 9 10 11*/
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
int ivalue;
printf("enter the number");
scanf("%d",&ivalue);
factor(ivalue);
return 0;
}
