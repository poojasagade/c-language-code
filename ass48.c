//Accept number from user and display below pattern
//input:5
//output:1 * 2 * 3 * 4 * 5 *
#include<stdio.h>
void pattern(int num)
{
for(int i=1;i<=num;i++)
{
printf("%d \t * \t",i);

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
