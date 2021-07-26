/*Assignment No 17
Accept the number from user and return the number which are divisible by 5
input: N 6  elements:85  66 3 80 93 88
output: 85 80
*/
#include<stdio.h>
#include<stdlib.h>
void display(int p[],int ivalue)
{
int i;
printf("number divisible by 5 are \n");
        for(i=0;i<ivalue;i++)
        {
                if(p[i]%5==0)
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
for(i=0;i<num;i++)
{
scanf("%d",&p[i]);
}
display(p,num);
free(p);
return 0;
}
