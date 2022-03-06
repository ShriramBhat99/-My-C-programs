/* C Program to print Largest of Four Number*/
#include<stdio.h>
#include<conio.h>
int large (int a,int b,int c,int d)
{
    int A,B;
    if(a>b)
       A=a;
    else
       A=b;
    if(c>d)
       B=c;
    else
       B=d;
    if(A>B)
    return A;
    else
    return B;
}
int main()
{
    int a,b,c,d,max;
    clrscr();
    printf("Enter any 4 integers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max=large(a,b,c,d);
    printf("Maximum Number in %d %d %d %d is %d",a,b,c,d,max);
    getch();
    return 0;
}