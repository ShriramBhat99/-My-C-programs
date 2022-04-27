/* C Program to determind whether the graph contain cycle or not */

#include<stdio.h>
#include<conio.h>
int DFS(int , int a[20][20], int visit[20], int);
int main()
{
	int n,a[20][20],visit[20],i,j,count=0;
	clrscr();
	printf("Enter the numbers of node:\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
	{
		visit[i]=0;
	    for(j=1;j<=n;j++)
	        scanf("%d",&a[i][j]);
    }
	count=DFS(1,a,visit,n);
	if(n==count)
	      printf("Graph contain cycle");
	else
	      printf("Graph not contain any cycle ");
	getch();
	return 0;
}
int DFS(int i, int a[20][20], int visit[20], int n)
{
	int count=0,j;
	for(j=1;j<=n;j++)
	    if(a[i][j]==1)
	    {
	    	printf("%d ---> %d\n",i,j);
	    	visit[i]=1;
	    	a[i][j]=0;
	    	a[j][i]=0;
	    	DFS(j,a,visit,n);
		}
		
		for(j=1;j<=n;j++)
		{
		   if(!visit[j])
		       visit[j]=1;
		   if(visit[j])
		       count++; 
	    }
		   return count;
}
