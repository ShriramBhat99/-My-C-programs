/*C program to find Factorial of a number using Recurssion*/
#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
   
    if(n==0||n==1)
    {
        return 1;

    }
    else
    {
        return n*factorial(n-1);
        
    }
}
int main()
{
    int n;
    clrscr();
    printf("Enter the Number\n");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    getch();
    return 0;
}
