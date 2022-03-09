#include<stdio.h>
#include<conio.h>
int main()
{
    int n,j,i;
    clrscr();
    printf("Enter the Number of Rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        printf(" ");
        printf("*");
        if(i>1 && i!=n)
        {
           for(k=1;k<i;k++)
               printf(" ");
          printf("*");
        }
        if(i==n)
           for(i=1;i<=n;i++)
            printf(" *");
        printf("\n");
    }
    getch();
    return 0;
}