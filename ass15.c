//accept the character from user and check whether that character is vowel or not
//input a  y
//output: true false
#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0
bool chevowel(char cval)
{
int lowercase ,upercase;
	lowercase=(cval=='a'|| cval=='e'|| cval=='i'||cval=='o'||cval=='u');
	upercase=(cval=='A'|| cval=='E'|| cval=='I'||cval=='O'||cval=='U');
	if(lowercase||upercase)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
char ch;
bool res;
printf("enter the character");
scanf("%c",&ch);
res=chevowel(ch);
if(res==TRUE)
{
	printf("it is vowel");
}
else
{
	printf("it is not vowel");
}
return 0;
}
