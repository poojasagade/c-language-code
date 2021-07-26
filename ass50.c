//Accept number from user and display below pattern
//input:8
//output:2 4 6 8 10 12 14 16 
#include<stdio.h>
void pattern(int num)
{
for(int i=2;i<=num*2;i++)
{
if(i%2==0)
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
pattern(ivalue);
return 0;
}
