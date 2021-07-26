/*Assignment No 17
Accept the number from user and check whether that numbers contain 11in it or not
input: N 6  elements:85  66 3 80 93 88 11
output:  11 is present
*/
#include<stdio.h>
#include<stdlib.h>
int display(int p[],int ivalue)
{
if((p==NULL)&&(ivalue<0))
{
return 0;
}
int i,cnt;
        for(i=0;i<ivalue;i++)
        {
                if(p[i]==11)
                {
                    break;        
                }
                
        }
        if(i==ivalue)
        {
                return -1;
        }
        else
        {
                return i;
        }
}
int main()
{
int *p=NULL;
int num,i,ret;
printf("Enter the element you want to enter \n");
scanf("%d",&num);
p=(int*)malloc(num*sizeof(int));
if(p==NULL)
{
printf("Unable to allocate the memory");
return -1;
}
        for(i=0;i<num;i++)
        {
                 scanf("%d",&p[i]);
        }
ret=display(p,num);
if(ret==-1)
{
printf("Number is not found");
}
else
{
printf("number found");
}
free(p);
return 0;
}
