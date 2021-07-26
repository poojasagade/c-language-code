#include<stdio.h>
void display(int ino,int freq)
{
int i;
for(i=1;i<=freq;i++)
{
printf("%d \n",ino);
}
}
int main()
{
int ivalue=0;
int frequency=0;
printf("Enter the number");
scanf("%d",&ivalue);
printf("Enter the frequency");
scanf("%d",&frequency);
display(ivalue,frequency);
return 0;
}
