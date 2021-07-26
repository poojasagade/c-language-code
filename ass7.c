#include<stdio.h>
void display(int ino)
{
	while(ino>0)
	{
	printf("*");
	ino--;
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
