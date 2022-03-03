#include<stdio.h>
#include<conio.h>
void main()
{    int num,i,sum=0,n,r=0; 
     clrscr(); 
     printf("Enter a number\n"); 
     scanf("%d",&n); 
     num=n; 
     while(n>0) 
     {
         r=n%10;
         n=n/10;
         sum=sum*10+r;
     }
     if(num==sum)
          printf(" Given number is a palindrome\n ");
      else
        printf(" Given number is not a palindrome\n ");

    printf("Reverse of the %d is %d",num,sum);
    getch();
}

