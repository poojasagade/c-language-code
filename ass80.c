/*Assignment No 17
Accept the number from user and display all such number which are multiples of 11
input: N 6  elements:85  66 3 80 93 88
output:  66 88
*/
#include<stdio.h>
#include<stdlib.h>
void display(int p[],int ivalue)
{
int i;
if((p==NULL)&&(ivalue<0))
{
return ;
}
printf("number which are multiple of  \n");
        for(i=0;i<ivalue;i++)
        {
                if(p[i]%11==0)
                {
                        printf(" %d \n",p[i]);      
                }                
        }
 
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
display(p,num);
free(p);
return 0;
}
