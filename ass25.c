//write the program which accept the number from user and return the difference bet summation all its facotrs and non factors
#include<stdio.h>
int factor(int num)
{
int i,diff;
int sum1=0,sum2=0;
if(num<=0)
{
num=-num;
}
for(i=1;i<num;i++)
{
if(num%i==0)
{
sum1=sum1+i;
}
}
for(i=1;i<num;i++)
{
if(num%i!=0)
{
sum2=sum2+i;
}
}
diff=sum1-sum2;
return diff;
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
