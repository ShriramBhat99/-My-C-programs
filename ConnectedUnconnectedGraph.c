/* C Program to find whether the graph is connected or not */
#include<stdio.h>
#include<stdio.h>
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
	      printf("Graph is connected");
	else
	      printf("Graph is not connected");
	getch();
	return 0;
}
int DFS(int i, int a[20][20], int visit[20], int n)
{
	int count=0,j;
	visit[i]=1;
	for(j=1;j<=n;j++)
	    if(a[i][j]==1 && !visit[j])
	    {
	    	printf("%d ---> %d\n",i,j);
	    	DFS(j,a,visit,n);
		}
		
		for(j=1;j<=n;j++)
		   if(visit[j])
		       count++;
		   

	return count;
}
