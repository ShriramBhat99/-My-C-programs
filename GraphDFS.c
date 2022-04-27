/* C Program to traverse a graph using DFS */
#include<stdio.h>
#include<conio.h>
void DFS(int,int,int arr[20][20],int*);
int main()
{
	int i,j,a[20][20],visit[20],n;
	clrscr();
	printf("Enter the number of the vertices:\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	{
		visit[i]=0;
		for(j=1;j<=n;j++)
		    scanf("%d",&a[i][j]);
	}
	DFS(1,n,a,visit);
	getch();
	return 0;
}

void DFS(int i,int n,int a[20][20],int* visit)
{
	int j;
	visit[i]=1;
	for(j=1;j<=n;j++)
		 if(a[i][j]==1 && !visit[j])
	     {
	     	printf("%d --> %d\n",i,j);
			 DFS(j,n,a,visit);
		 }
}-
