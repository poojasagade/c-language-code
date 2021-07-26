/* Accept N number from user display summation of digit of each number
input:234 35  2345
output:9 8   14
*/
#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int num)
{
int i=0,digit=0,sum=0;
int j=0;
        for(i=0;i<num;i++)
        {
                sum=0;
                while(arr[i]!=0)
                {
                digit=arr[i]%10;
               sum=sum+digit;
               arr[i]=arr[i]/10;
               }
               printf("%d \n",sum);
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
