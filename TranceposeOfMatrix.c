/* C Program to find Transpose of the given matrix */

#include<stdio.h>
int main()
{
	int a[20][20],i,j,temp,n1,n2,n;
	printf("Enter the order of matrix\n");
	scanf("%d%d",&n1,&n2);
	printf("Enter the order of the matrix\n");
	for(i=0;i<n1;i++)
	    for(j=0;j<n2;scanf("%d",&a[i][j++]));
	printf("\n\nBefore Transpose:\n");
	for(i=0;i<n1;i++)
	{
	     for(j=0;j<n2;j++)
	            printf("%d\t",a[i][j]);
	    printf("\n");
     }
     n=(n1>n2)?n1:n2;
     	for(i=0;i<n;i++)
     	    for(j=i+1;j<n;j++)
     	    {
     	          temp=a[i][j];
     	          a[i][j]=a[j][i];
     	         a[j][i]=temp;
     	    }
     	    
     	    
     	    printf("\n\n\n");
     	    
     	printf("After the Transpose:\n");    
       if(n1<=n2)
       {
	   
    	for(i=0;i<n2;i++)
	  {
	     for(j=0;j<n1;j++)
	            printf("%d\t",a[i][j]);
	    printf("\n");
      }
  }
     
          if(n1>n2)
          {
		  
    	for(i=0;i<n2;i++)
	 {
	     for(j=0;j<n1;j++)
	            printf("%d\t",a[i][j]);
	    printf("\n");
      }
     }
}
