//Accept the number from user and print all odd number up to n
//input:18
//output:1 3 5 7 9 11 13
#include<stdio.h>
void display(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=1;i<=num;i++)
{
if(i%2!=0)
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
display(ivalue);
return 0;
}
