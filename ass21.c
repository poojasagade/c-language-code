//Write a program which accept number from user and display its multiplication of factors
#include<stdio.h>
int mult(int num)
{
int mul=1,i;
if(num<=0)
{
num=-num;
}
for(i=1;i<num;i++)
{
if(num%i==0)
{
printf("%d \n",i);
mul=mul*i;
}

}
return mul;
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
