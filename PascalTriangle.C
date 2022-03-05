/* C prgram to construct a Pascal triangle */
#include<stdio.h>
#include<conio.h>
int factorial(long int);
int main()
{
    int i,j,k,n;
    clrscr();
    printf("Enter the number of Rows\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	for(j=i;j<n;j++)
	{
	     printf(" ");
	 }
	 for(k=0;k<=i;k++)
	 {

	      printf(" %d ",factorial(i)/(factorial(k)*factorial(i-k)));

	  }
	  printf("\n");
     }
     getch();
     return 0;

}

int factorial(long int n)
{
   long int fact=1,i;
    if(n==0||n==1)
      { return 1;}
     else
       {
	   for(i=n;i>=1;i--)
	   fact=fact*i;
       }
    return fact;
}
