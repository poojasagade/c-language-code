//write a program which accept number from user and display its multiplication of facctors
/*input: 12
output:144 (1*2*3*4*6)*/
#include<stdio.h>
void mulfact(int num)
{
int i;
int imul=1;
if(num<=0)
{
num=-num;
}
for(i=1;i<num;i++)
{
if(num%i==0)
{
printf("%d \n ",i);
imul=imul*i;
}

}
printf("%d \n",imul);
}
int main()
{
int ivalue,iret;
printf("Enter the value");
scanf("%d",&ivalue);
mulfact(ivalue);
return 0;
}
