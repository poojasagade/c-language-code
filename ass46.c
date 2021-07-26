//Accept number from user and display below pattern
//input:5
//output:A B C D E
#include<stdio.h>
void pattern(int num)
{
char ch='A';
for(int i=1;i<=num;i++)
{
printf("%c \n",ch);
ch++;
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
