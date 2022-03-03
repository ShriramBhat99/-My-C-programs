/* C Program to swap two numbers without using third variable */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter Seconf number\n");
    scanf("%d",&b);
    printf("Before Swapping\n");
    printf("First number A=%d\n Second number B=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping\n");
}   printf("First number A=%d\n Second number B=%d\n",a,b);
