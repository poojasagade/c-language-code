/*Acccept the division of student from user and depends on the division display exam time
There are 4 div in school  as A,B,C D .exam of div A at 7AM ,B at 8.30Am ,c at 9.20 AM,d at 10.30 AM
(application should be case insesitive)
*/
#include<stdio.h>
void display(char ch1)
{
       if((ch1==65)||(ch1==97))
       {
                printf("Exam  of div A is at 7 AM");
       }
       else if((ch1=='B')||(ch1=='b'))
       {
                printf("Exam  of div B is at 8.30 AM");
       }
       else if((ch1=='C')||(ch1=='c'))
       {
                printf("Exam  of div C is at 9.20 AM");
       }
       else if((ch1=='D')||(ch1=='d'))
       {
                printf("Exam  of div D is at 10.30AM");
       }
}
int main()
{
        char ch;
        
        printf("Enter the division of student \n");
        scanf("%c",&ch);
        display(ch);
        return 0;
}
