/*Assignment No 17
Accept the number from user and return the difference between summation of even elements and summation of odd elements
input: N 6  elements:85  66 3 80 93 88
output:53
*/
#include<stdio.h>
#include<stdlib.h>
int display(int p[],int ivalue)
{
int i,diff=0;
int sum1,sum2=0;
        for(i=0;i<ivalue;i++)
        {
                if(p[i]%2==0)
                {
                        sum1=sum1+p[i];
                }
                else
                {
                        sum2=sum2+p[i];
                }
        diff=sum1-sum2;
        }
 return diff;
}
int main()
{
int i,ret,num=0;
int *p=NULL;
printf("Enter the number of elements");
scanf("%d",&num);
p=(int*)malloc(num*sizeof(int));
for(i=0;i<num;i++)
{
scanf("%d",&p[i]);
}
ret=display(p,num);
printf("difference is =%d",ret);
free(p);
return 0;
}
