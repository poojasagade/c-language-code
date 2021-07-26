/*Assignment No 17
Accept the number from user and return the difference between frequency of even number and odd number
input: N 7  elements:85  66 3 80 93 88 90
output:  1
*/
#include<stdio.h>
#include<stdlib.h>
int display(int p[],int ivalue)
{
int i,cnt1,cnt2,diff;
if((p==NULL)&&(ivalue<0))
{
return -1 ;
}
printf("number which are multiple of  \n");
        for(i=0;i<ivalue;i++)
        {
                if(p[i]%2==0)
                {
                        cnt1++;      
                }   
                else
                {
                        cnt2++;
                } 
                diff=cnt1-cnt2 ;           
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
if(p==NULL)
{
printf("Unable to allocate memory");
return -1;
}
for(i=0;i<num;i++)
{
scanf("%d",&p[i]);
}
ret=display(p,num);
printf("difference is=%d",ret);
free(p);
return 0;
}
