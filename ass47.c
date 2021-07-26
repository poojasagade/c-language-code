//Accept number from user and display below pattern
//input:5
//output:5 # 4 # 3 # 2 # 1 # 
#include<stdio.h>
void pattern(int num)
{
for(int i=num;i>=1;i--)
{
printf("%d \t #\t",i);
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
