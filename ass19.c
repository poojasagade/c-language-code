/*accept the number from user and rreturn summation of all its non factor
input:12
output:5+7+8+9+10+11=50*/
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
int ivalue;
int res;
printf("enter the number");
scanf("%d",&ivalue);
res=factor(ivalue);
printf("%d",res);
return 0;
}
