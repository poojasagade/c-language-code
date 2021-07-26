//Write the progra which accpet N and print first 5 multiples of N
//input:4
//output:4 8 12 16 20
#include<stdio.h>
void pattern(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=1;i<=num*5;i++)
{
if(i%4==0)
{
printf("%d \n",i);
}
}
}
int main()
{
int ivalue;
printf("Enter the number");
scanf("%d",&ivalue);
pattern(ivalue);
return 0;
}
