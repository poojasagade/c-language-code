//Accept one number from user and print that number of even number on screen
//input:7
//output:2 4 6 8 10 12 14
#include<stdio.h>
int display(int num)
{
int i;
for(i=1;i<=num*2;i++)
{
if((i%2)==0)
{
	printf("%d \n",i);
}
}
return i;	
}
int main()
{
int ivalue;
printf("Enter the number:");
scanf("%d",&ivalue);
display(ivalue);
return 0;
}
