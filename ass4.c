//accept one number and state number is divisible 5 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int check(int n)
{
if((n%5)==0)
{
return TRUE;
}
else
{
return FALSE;
}
}
int main()
{
int num,res;
printf("Enter the number:");
scanf("%d",&num);
res=check(num);
if (res==TRUE)
{
printf("number is divisible by 5");
}
else
{
printf("number is not divisible 5");
}
return 0;
}
