/* C program to find the sum of Maximum numbers in a given array*/
#include<stdio.h>
int main()
{
	int a[100],term,n,i,j,temp,sum=0;
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	     for(j=i+1;j<n;j++)
	         if(a[j]>a[i])
	         {
	         	temp=a[i];
	         	a[i]=a[j];
	         	a[j]=temp;
			 }
	
	printf("Enter how many maximum number sums you want\n");
	scanf("%d",&term);
	for(i=0;i<term;sum=sum+a[i++]);
     if(term==1)
	    printf("%d maximum number is: %d",a[0]);
	else
	    printf("%d maximum numbers are: ");
	    for(i=0;i<term;printf("%d\t",a[i++]));
	printf("\n");
	printf("Sum=%d",sum);
}
printf("hii");
