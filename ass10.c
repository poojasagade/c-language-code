//Accept the number from user and check whether the number is even or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
void display(int no)
{
if((no%2)==0)
{
printf("number is even");
}
else
{
printf("Number is odd");
}
}
int main()
{
int num;
printf("Enter the number");
scanf("%d",&num);
display(num);
return 0;
}
