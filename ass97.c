//Accept character from user and check whether it is capital or not
//input :F
//output:true
#include<stdio.h>
#include<stdbool.h>
bool check(char ch1)
{
        if((ch1>=65)&&(ch1<=90))
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
        printf("Enter the character");
        scanf("%c",&ch);
        ret=check(ch);
        if(ret==true)
        {
                printf("it is capital letter");
        }
        else
        {
                printf("it not a capital letter");
        }
        return 0;
        
}
