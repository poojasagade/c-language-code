/*Accept the N number from usser and return the product of all odd number
input:6
15 3 68 80 90 44
ou[ut:45
*/
#include<stdio.h>
#include<stdlib.h>
int product(int arr[],int num1)
{
int i=0;
int mul=1;
if((arr==NULL)&&(num1<0))
{
return -1;
}
for(i=0;i<num1;i++)
{
if(arr[i]%2!=0)
{
mul=mul*arr[i];
}
}
return mul;
}
int main()
{
int *arr=NULL;
int ilength=0,i=0,num=0;
int ret=0;
printf("Enter the number of  element you want to enter");
scanf("%d",&num);
arr=((int*)malloc(num*(sizeof(int))));
if(arr==NULL)
{
printf("unable to allocate memory");
return -1;
}
for(i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
ret=product(arr,num);
printf("product of all odd number is %d",ret);
free(arr);
return 0;
}
