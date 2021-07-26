/*Accept number of rows and number of columns from user and display below pattern
input:rows 3 col 4
output: 1 1 1 1
	2 2 2 2
	3 3 3 3
	4 4 4 4
*/

#include<stdio.h>
void pattern(int rows,int cols)
{
int i ,j;
for(i=1;i<=rows;i++)
{
for(j=1;j<=cols;j++)
{
printf("%d \t",i);
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
