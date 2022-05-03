/* C Program to remove duplicate elements from linked list */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *link;
};
typedef struct list node;

node* getnode()
{
	node *ptr;
	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL)
	{
		printf("Error occured\n");
		exit(0);
	}
	return ptr;
}



node* insertion(int item,node* start)
{
    node *ptr,*temp;
    ptr=getnode();
    ptr->data=item;
    if(start==NULL)
    {
        start=ptr;
       	ptr->link=NULL;
    	return start;
    }
    temp=start;
    while(temp->link!=NULL)
    {
    	temp=temp->link;
	}
	temp->link=ptr;
	ptr->link=NULL;
	return start;
} 


void display(node* start)
{
	node* ptr;
	ptr=start;
	if(start==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->link;
	}
	printf("\n\n\n");
	
} 


void duplicate(node* start)
{
	node *pre,*next,*cur;
	pre=cur=start;
	next=start->link;
	while(cur->link!=NULL)
	{
	
		if(cur->data==next->data)
		{

		 pre->link=next->link;
		 next=next->link;
	   }
	   else
	   {
	   	
	   	next=next->link;
	   	pre=pre->link;
	 
	   } 
	   if(cur->link==NULL)
	         break;
	   	if(next==NULL)
		{
			cur=cur->link;
			pre=cur;
			next=cur->link;
		} 
		
	 } 
}
int main()
{
	int item,n,i;
	node* start=NULL;
	clrscr();
	printf("Enter the number of elements to be insert\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&item);
		start=insertion(item,start);
	}
	printf("Given Linked list\n");
	display(start);
	duplicate(start);
	printf("Linked list after removal of duplicate elements\n");
	display(start);
	getch();
	return 0;
}
