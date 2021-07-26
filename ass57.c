/*Accept number of rows and number of columns from user and display below pattern
input:rows 4 col 4
output: A B C D
	a b c d
	A B C D
	a b c d 
*/

#include<stdio.h>
void pattern(int rows,int cols)
{
int i ,j;
char ch='\0';
char cha='\0';
for(i=1;i<=rows;i++)
{
for(j=1,ch='A',cha='a';j<=cols;j++,ch++)
{
if(i%2==0)
{
printf("%c \t",cha++);
}
else
{
printf("%c \t",ch);
}
}
printf("\n");
}
}
int main()
{
int ivalue1,ivalue2;
printf("Enter the number of rows");
scanf("%d",&ivalue1);
printf("Enter the number of columns");
scanf("%d",&ivalue2);
pattern(ivalue1,ivalue2);
return 0;
}
