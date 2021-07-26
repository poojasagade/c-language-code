/*Accept number of rows and number of columns from user and display below pattern
input:rows 3 col 5
output: 5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1
*/

#include<stdio.h>
void pattern(int rows,int cols)
{
int i ,j;
for(i=1;i<=rows;i++)
{
for(j=cols;j>=1;j--)
{
printf("%d ",j);
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

