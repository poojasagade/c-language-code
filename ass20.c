/*accept number from user and return the difference between summation of all its factor and non factor
input:12
output:-34
*/
#include<stdio.h>
int factor(int num)
{
int i;
int sum1=0;
int sum2=0;
int diff;
if(num<=0)
{
num=-num;
}
for(i=1;i<num;i++)
{
if(num%i==0)
{
sum1=sum1+i;
}
}
for(i=1;i<num;i++)
{
if(num%i!=0)
{
sum2=sum2+i;
}
}
diff=sum1-sum2;
return diff;
}
int main()
{
int ivalue;
int res;
printf("enter the number");
scanf("%d",&ivalue);
res=factor(ivalue);
printf("%d \n",res);
return 0;
}
