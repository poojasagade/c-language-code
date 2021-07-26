/*
Accept N number from user and accepr another number as no and return index of first ocurrence of that no 
input 6 5
2 3 5 6 7 8
ouput:2
*/
#include<stdio.h>
#include<stdlib.h>
int present(int p[],int num1,int no1)
{
int i;
        if((p==NULL)&&(num1<0))
        {
                return 0;
        }
        for(i=0;i<num1;i++)
        {
                if(p[i]==no1)
                {
                        break;
                }
        }
        if(i==num1)
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
int i=0,num=0,no=0;
int ret=0;
printf("Enter the elements you want to enter");
scanf("%d",&num);
printf("Enter the number which you want to search");
scanf("%d",&no);
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
ret=present(p,num,no);
if(ret==-1)
{
printf("there is no number");
}
else
{
printf("first occurence is %d",ret);
}
free(p);
return 0;
}
