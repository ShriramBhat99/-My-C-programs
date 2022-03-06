/* C Program to find Largest of Three Number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,max;
    clrscr();
    printf("Enter any three Integers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    if(a>c)
      max=a;
    else
      max=c; 

    else if(b>c)
         max=b;
      else
        max=c;
    prinf("Largest number in %d %d %d is %d",a,b,c,max);
       getch();
       return 0;

}