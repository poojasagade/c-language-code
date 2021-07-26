//Accept the number from user and print that number of $ and * on screen
//input:5
//output:$ * $ * $ * $ * $ * 
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
printf(" $ \t * ");
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
