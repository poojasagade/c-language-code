//Accept character from user and check whether it is small or not
//input :F
//output:false
#include<stdio.h>
#include<stdbool.h>
bool check(char ch1)
{
        if((ch1>=97)&&(ch1<=122))
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
                printf("it is small character");
        }
        else
        {
                printf("it not a small character");
        }
        return 0;
        
}
