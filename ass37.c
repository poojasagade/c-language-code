//accept the number From user and print numbers till that number
//input:8
//output:1 2 3 4 5 6 7 8
#include<stdio.h>
void pattern(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=1;i<=num;i++)
{
printf("%d \n ",i);
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
