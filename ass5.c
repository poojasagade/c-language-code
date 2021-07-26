//Accept the number and print that number of * on screen
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
ivalue=5;
display(ivalue);
return 0;
}
