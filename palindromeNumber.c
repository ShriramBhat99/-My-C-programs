#include<stdio.h>
#include<conio.h>
void main()
{    int num,i,sum,n,r; 
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
          printf(" Given number is a palindrome ");
      else
        printf(" Given number is not a palindrome ");

    printf("Reverse of the %d is %d",num,sum);
    getch();
}

