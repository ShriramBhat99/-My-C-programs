/* C Program for reversing a given linked list*/
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
	node *Node;
	Node=(node*)malloc(sizeof(node));
	return Node;
}
node* insert(int item,node* head)
{
	node *p,*temp;
	p=getnode();
	if(p==NULL)
	{
	   printf("Error occures\n");
	   return;
    }
    p->data=item;
    temp=head;
    if(head==NULL)
    {
        head=p;
        p->link=NULL;
        return head;
	}
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=p;
	p->link=NULL;
	return head;
}

void display(node *head)
{
	node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}

node* reverse(node *head)
{
	node *prev,*cur,*next;
	prev=NULL;
	cur=head;

	next=head;
	while(cur!=NULL)
	{
	  
	    next=next->link;
		cur->link=prev;
		prev=cur;
		cur=next;
	
	
	}
	return prev;
}



int main()
{
   int n,i,item;
   node *head=NULL,temp;
   clrscr();
   printf("Enter how may elements do you want to insert\n");
   scanf("%d",&n);
   printf("Enter elements:\n");
   for(i=1;i<=n;i++)
   {
     	scanf("%d",&item);
   	    head=insert(item,head);
   }
   printf("Linked list elements are:\n");
   display(head);
   printf("\n\n");
   printf("Reversed linked list elements are:\n");
   head=reverse(head);
   display(head);
    while(n!=0)
    {
	    temp=head;
	    if(head!=NULL)
	    head=head->link;
	    free(temp);
	     n--;
    }
   getch();
   return 0;
   	
}
