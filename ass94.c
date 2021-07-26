//Accept N number from user and display all such number which contain 3 digit in it 
//input:6
//elements:234 12 456 34 12 677
//ouput:234  456 677
#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int num)
{
        int i=0;
        printf("Number which contain 3 digit are:");
        for(i=0;i<num;i++)
        {
                if((arr[i]>=100)&&(arr[i]<=999))
                {
                        printf(" %d",arr[i]);
                }
        }
}
int main()
{
        int *p=NULL;
        int ilength=0,i=0;
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
        display(p,ilength);
        free(p);
        return 0;
}
