/* C Program to Print numbers from 1 to N in horizontal formate*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,j;
	clrscr();
	printf("Enter the range\n");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%-4d",i);
		for(j=i+10;j<=n;j=j+10)
		printf("%-4d",j);
		i++;
		printf("\n");
	}
	getch();
	return 0;
}
