/*C program to find Factorial of a number using Recurssion*/
#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
    int fact;
    if(n==0||n==1)
    {
        return 1;

    }
    else
    {
        fact=n*factorial(n-1);
        return fact;
    }
}
int main()
{
    int n,fact;
    clrscr();
    printf("Enter the Number\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is %d",n,fact);
    getch();
    return 0;
}
