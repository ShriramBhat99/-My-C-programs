/* C Program For printing Fibonacii Series */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1=0,n2=1,sum,i,n;
    clrscr();
    printf("Enter the Number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",n1);
        sum=n1+n2;
        n1=n2;
        n2=sum;
    }
    getch();
    return 0;
    
}
