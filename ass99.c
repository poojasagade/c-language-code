//Accept character from user and check whether it is digit  or not
//input :7
//output:true
#include<stdio.h>
#include<stdbool.h>
bool check(char ch1)
{
        if((ch1>=48)&&(ch1<=57))
        {
                return true;
        }
        else
        {
                return false;
        }
}
int main()
{
        char ch;
        bool ret=false;
        printf("Enter the character \n");
        scanf("%c",&ch);
        ret=check(ch);
        if(ret==true)
        {
                printf("it is digit");
        }
        else
        {
                printf("it not a digit");
        }
        return 0;
        
}
