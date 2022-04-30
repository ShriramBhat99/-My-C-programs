/* C Program to search the given element in the given assending order list using the binary search*/
#include<stdio.h>
#include<conio.h>
int binarySearch(int key,int start,int end,int* a)
{
   int mid;
   mid=start+((end-start)/2);
   if(start>end) return -1;
   if(a[mid]==key)
       return mid;
    else if(key<a[mid])
         return binarySearch(key,0,mid-1,a);
    else if(key>a[mid])
          return binarySearch(key,mid+1,end,a);
    
}
int main()
{
	int a[10],n,i,key,res;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the Elements in assending order\n");
	for(i=0;i<n;scanf("%d",&a[i++]));
	printf("Enter the key element to serach\n");
	scanf("%d",&key);
	res=binarySearch(key,0,n-1,a);
	if(res==-1)
	  printf("%d element is not found in the given list",key);
	else
	  printf("%d element is found the position %d",key,res+1);
	
	getch();
	return 0;
}
