/*Write the program which accept range from user and display all numbersin bet that range in reverse order
input:23 30
output:30 29 28 27 26 25 24 23
*/
#include<stdio.h>
void rangedisplay(int start,int end)
{
int i;
if(start>end)
{
printf("invalid range");
}
for(i=end;i>=start;i--)
{
printf("%d \n",i);
}
}
int main()
{
int ivalue1,ivalue2;
int ret;
printf("Enter the starting number");
scanf("%d",&ivalue1);
printf("Enter the ending number");
scanf("%d",&ivalue2);
rangedisplay(ivalue1,ivalue2);
return 0;
}
