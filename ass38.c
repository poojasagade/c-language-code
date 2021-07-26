//Accept the number from user and print its number line
//input:4
//output: -4 -3 -2 -1 0 1 2 3 4
#include<stdio.h>
void display(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=-num;i<=num;i++)
{
printf(" %d ",i);
}
}
int main()
{
int ivalue;
printf("Enter the number");
scanf("%d",&ivalue);
display(ivalue);
return 0;
}
