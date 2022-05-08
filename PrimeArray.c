/* C Program to find sum of all prime numbers in a given array */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],n,i,j,sum=0,flag=0;
    clrscr();
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;scanf("%d",&a[i++]));
    printf("Sum of ");
    for(i=0;i<n;i++)
    {
        if(a[i]==1) flag=1;
        for(j=2;j<=(a[i]/2);j++)
              if(a[i]%j==0)
              {
                  flag=1;
                  break;
              }
        if(flag==0)
        {
            printf("%d ",a[i]);
            sum=sum+a[i];
        }
        flag=0;

    }
    if(sum==0)
         printf(" 0 is 0\n");
    else
         printf("is  %d\n",sum);
    return 0;
    getch();

}
