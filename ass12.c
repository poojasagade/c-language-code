//accept the number from user and print even factor of that number
//input:24
//output:2 4 6 8 12
#include<stdio.h>
int display(int num)
{
int i;
if(num<0)
{
num=-num;
}
for(i=1;i<=num;i++)
{
	if(num%i==0)
	{
		if(i%2==0)
		{
			printf("%d \n",i);
		}
	}
}
return i;
}
int main()
{
int ivalue;
printf("Enter the number");
scanf("%d",&ivalue);
display(ivalue);
return 0;
}
