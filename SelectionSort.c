/* C Program to sort Array elements in Assending and Desending order Using Sequential Search*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,j,n,temp;
	clrscr();
	printf("Enter the Array size\n");
	scanf("%d",&n);
	printf("Enter Array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
      printf("Array elements in Assending order\n");
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			 if(a[j]<a[i])
			 {
			      temp=a[i];
			      a[i]=a[j];
			      a[j]=temp;
			  }
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	printf("Array elements in Desending order\n");
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	getch();
	return 0;
}

