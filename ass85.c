//Accept the N number from user and accept one another number as no return the frequency of no from it
#include<stdio.h>
#include<stdlib.h>
int frequency(int p[],int num,int no)
{
int i,cnt;
for(i=0;i<num;i++)
{
        if(p[i]==no)
        {
                cnt++;
        }
}
return cnt;
}
int main()
{
int *p=NULL;
int num,no,ret,i;
printf("Enter the number which you want to search");
scanf("%d",&no);
printf("Enter the elements you want to entered");
scanf("%d",&num);
p=(int*)malloc(num*sizeof(int));
for(i=0;i<num;i++)
{
scanf("%d",&p[i]);
}
ret=frequency(p,num,no);
printf("Frequency is =%d",ret);
free(p);
return 0;
}
