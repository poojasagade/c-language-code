#include<stdio.h>
int display(int n)
{
int i;
for(i=0;i<n;i++)
{
printf("marvellous \n");
}
}
int main()
{
int num,p;
printf("Enter the number");
scanf("%d",&num);
p=display(num);
printf("%d \n",p);
return 0;
}
