/*Write the program which accept range from user and return addition of all number in between that range
input:23 30
output:212
*/
#include<stdio.h>
int rangedisplay(int start,int end)
{
int i;
int sum=0;
if(start>end)
{
printf("invalid range");
}
for(i=start;i<=end;i++)
{
sum=sum+i;
}
return sum;
}
int main()
{
int ivalue1,ivalue2;
int ret;
printf("Enter the starting number");
scanf("%d",&ivalue1);
printf("Enter the ending number");
scanf("%d",&ivalue2);
ret=rangedisplay(ivalue1,ivalue2);
printf("%d",ret);
return 0;
}
