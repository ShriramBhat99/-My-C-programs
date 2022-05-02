/* C program to find peak element in given bitonic array */
#include<stdio.h>
int bitonic(int*,int,int,int);
int main()
{
	int a[20],n,i,res;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements of bitonic array\n");
	for(i=0;i<n;scanf("%d",&a[i++]));
	res=bitonic(a,0,n-1,n-1);
	    printf("peak elements is %d",res);
	    return 0;
}
int bitonic(int *a,int min,int max,int n)
{
	int mid;
	mid=min+((max-min)/2);
	if(mid==n && a[mid-1]<a[mid])
	          return a[mid];
	else if(mid==0 &&  a[mid]>a[mid+1])
	          return a[mid];
	else if(a[mid-1]<a[mid]  &&  a[mid+1]<a[mid])
	             return a[mid];
	else if(a[mid-1]<a[mid])
	               return bitonic(a,mid+1,max,n);
	else if(a[mid-1]>a[mid])
	                return bitonic(a,0,mid-1,n);
}
