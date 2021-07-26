/*Write the program which accept range from user and display all even number in between that range
input:23 35
output:24 26 28 30 32 34
*/
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
if(i%2==0)
{
printf("%d \n",i);
}
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
