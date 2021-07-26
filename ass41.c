//Write the program which accept range from user and display all number in between that range
//input:23 35
//output:23 24 25 26 27 28 29 30 31 32 33 34 35
#include<stdio.h>
void rangedisplay(int start,int end)
{
int i;
if(start>end)
{
printf("invalid range");
}
for(i=start;i<=end;i++)
{
printf("%d \n",i);
}
}
int main()
{
int ivalue1,ivalue2;
printf("Enter the starting number");
scanf("%d",&ivalue1);
printf("Enter the ending number");
scanf("%d",&ivalue2);
rangedisplay(ivalue1,ivalue2);
return 0;
}
