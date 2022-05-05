/* C program to find nth term of the prime series*/
#include<stdio.h>
#include<conio.h>
int Prime(int);
int main()
{
int n;
clrscr();
printf("Enter which number term of want in prime series?\n");
scanf("%d",&n);
printf("The %dth number is %d",n,Prime(n));
getch();
return 0;
}
int Prime(int n)
{
      int num=3,sign,prime,i=2,j;
	if(n==1)
		return 2;
	else
		{
			while(i<=n)
			{
				sign=0;

				for(j=2;j<=(num/2);j++)

				{
				    if(num%j==0)
				    {
					sign=1;
					break;
				    }
				}
				    if(sign==0)
				    {
				      i++;
				      prime=num;
				    }
				    num++;
		       }
		       return prime;
		}
}
