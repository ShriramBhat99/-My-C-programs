/* C program to Print the following  Star Pattern
                 *
                * *
               * * *
              * * * *
             * * * * *
*/
#include<stdio.h>
#include<conio.h>
void main() 
{
    int  n,i,j,k;
    clrscr();
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         for(j=i;j<=n;j++)
             printf(" ");
         for(k=1;k<=i;k++)
             printf(" * ");
         printf("\n");
     }
     getch();
 }


