//accept the number from user and print the even factor of that number
//input:12
//output:2 4 6 
#include<stdio.h>
void display(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=1;i<=num;i++)
{
	if((num%i==0)&&(i%2==0))
	{
		printf("%d \n",i);
	}
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
