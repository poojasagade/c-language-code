/*Accept number of rows and number of columns from user and display below pattern
input:rows 4 col 4
output: A A A A
	B B B B
	C C C C
	D D D D
*/

#include<stdio.h>
void pattern(int rows,int cols)
{
int i ,j;
char ch='\0';
for(i=1,ch='A';i<=rows;i++,ch++)
{
for(j=1;j<=cols;j++)
{
printf("%c \t",ch);
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
