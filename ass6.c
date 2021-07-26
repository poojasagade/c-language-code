#include<stdio.h>
void display(int num)
{
int cnt;
for(cnt=1;cnt<=num;cnt++)
{
printf("*");
}
}
int main()
{
int ivalue=0;
printf("Enter the value");
scanf("%d",&ivalue);
display(ivalue);
return 0;
}
