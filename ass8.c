#include<stdio.h>
void display(int ino)
{
if(ino<30)
{
printf("hello");
}
else
{
printf("Demo");
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
