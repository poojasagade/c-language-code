/*
Accept N number from user and accept range display all element bet that range
input 6 
start:60
last:90
elements:85 66 3 76 93 88
ouput:85 66 76 88
*/
#include<stdio.h>
#include<stdlib.h>
void present(int p[],int num1,int first1,int last1)
{
int i=0;
        if((p==NULL)&&(num1<0))
        {
                return ;
        }
        printf("number in range are");
        for(i=0;i<num1;i++)
        {
             if((p[i]>=first1)&&(p[i]<=last1))
             {
                        printf("%d \n",p[i]);
             }
        }
        
}
int main()
{
int *p=NULL;
int i=0,num=0,first=0,last=0;
printf("Enter the elements you want to enter");
scanf("%d",&num);
printf("Enter the first number ");
scanf("%d",&first);
printf("Enter the last number ");
scanf("%d",&last);
p=(int*)malloc(num*sizeof(int));
if(p==NULL)
{
printf("unable to allocate memory");
return -1;
}
for(i=0;i<num;i++)
{
scanf("%d",&p[i]);
}
present(p,num,first,last);
free(p);
return 0;
}
