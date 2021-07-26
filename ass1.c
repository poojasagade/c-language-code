#include<stdio.h>
int divide(int no1,int no2)
{
int n;
n=no1/no2;
return n;
}
int main()
{
int p=0;
int q=0;
int res;
printf("Enter the first number:");
scanf("%d",&p);
printf("Enter the second number:");
scanf("%d",&q);
res=divide(p,q);
printf("result is %d",res);
return 0;
}
