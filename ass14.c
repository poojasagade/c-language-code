//accept one character from user and convert case of character
//input: a
//output:A
#include<stdio.h>
#include<string.h>
void convertchar(char str)
{

if(str>=97 && str<=122)
{
str=str-32;
}
else if (str>=65 && str<=90)
{
str=str+32;
}
printf("character is%c",str);
}
int main()
{
char c;
printf("Enter the character");
scanf("%c",&c);
convertchar(c);
return 0;
}
