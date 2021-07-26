//Accept the N number from user and return the largest number
#include<stdio.h>
#include<stdlib.h>
int maximum(int arr[],int num)
{
        int i=0,max=0;
        if((arr==NULL)&&(num<0))
        {
                return 0;
        }
        for(i=0;i<num;i++)
        {
                if(arr[i]>max)
                {
                        max=arr[i];
                }
        }
        return max;
}
int main()
{
        int *p=NULL;
        int ilength=0,i=0;
        int ret=0;
        printf("enter the number of elemnets you want to enter \n");
        scanf("%d",&ilength);
        p=(int*)malloc(ilength*(sizeof(int)));
        if(p==NULL)
        {
                printf("Unable to alloacate memory");
                return -1;
        }
        for(i=0;i<ilength;i++)
        {
                scanf("%d",&p[i]);
        }
        ret=maximum(p,ilength);
        printf("Max number is %d",ret);
        free(p);
        return 0;
}
