//write the program which accept number from user and display its digits in reverse order
#include<stdio.h>
void display(int num)
{
int digit;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
printf("%d \n",digit);
num=num/10;
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
