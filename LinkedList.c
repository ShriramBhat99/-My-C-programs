/* C Program to illustrate working of linked list*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *link;
};
typedef struct list node;
node *start=NULL;
node* getnode()
{
	node *p;
	p=(node*)malloc(sizeof(node));
	if(p==NULL)
	{
		printf("Memory can't be created\n");
		exit(0);
	}
	p->link=NULL;
	return p;
}


void insertBegin(int item)
{
	node *new_node;
	new_node=getnode();
	new_node->data=item;
	new_node->link = start;
	start=new_node;
}

void insertEnd(int item)
{
	node *new_node, *cur_node;
	new_node=getnode();
	new_node->data=item;
	if(start==NULL)
	{
		start=new_node;
		return;
	}
	cur_node=start;
	while(cur_node->link!=NULL)
	{
		if(cur_node->link==NULL)
		{
			printf("Invalid Position\n");
			return;
		}
		cur_node=cur_node->link;
	}
	cur_node->link=new_node;
	printf("Node inserted at the end successfully\n");
	return;
}


void insertPosition(int item,int pos)
{
	node *new_node, *prev_node;
	int i;
	new_node=getnode();
	new_node->data=item;
	if(pos==1)
	{
		new_node->link=start;
		start=new_node;
		return;
	}
	prev_node=start;
	for(i=1;i<pos-1;i++)
	{
		if(prev_node->link==NULL)
		{
			printf("Invalid position\n");
			return;
		}
		prev_node=prev_node->link;
   }
   
     new_node->link=prev_node->link;
     prev_node->link=new_node;
     printf("Node inserted successfully\n");
     return ;
}


void deleteBegin()
{
	node *temp;
	temp=start;
	if(start==NULL)
	{
		printf("List is empty\n");
		return ;
	}
	start=start->link;
	printf("Data removed=%d\n",temp->data);
	free(temp);
}


void deleteEnd()
{
	node *temp,*temp2;
	temp=temp=start;
	if(start==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	while(temp->link!=NULL)
	{
		temp2=temp;
		temp=temp->link;
	}
	temp2->link=NULL;
	printf("Data removed=%d\n",temp->data);
	free(temp);

}


void deletePosition(int pos)
{
	node *temp,*temp2;
	int i;
	if(start==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	temp=start;
	if(pos==1)
	{
		start=start->link;
		printf("Data removed=%d\n",temp->data);
		free(temp);
		return;
	}
	for(i=1;i<pos;i++)
	{
		temp2=temp;
		temp=temp->link;
	}
	printf("Data removed=%d\n",temp->data);
		temp2->link=temp->link;
	free(temp);
	return;
}

void display()
{
	node *temp;
	int i;
	if(start==NULL)
	{
		printf("List is empty\n");
		return ;
	}
	printf("List Elements\n");
	temp=start;
	while(temp!=NULL)
	   {
	   	printf("%d\n",temp->data);
	   	temp=temp->link;
	   }
	   return;
}

int main()
{
	int item,choice,pos;
	while(1)
	{
		printf("1.Insert At Front\n2.Insert At End\n3.Insert At Position\n4.Delete At First\n5.Delete At End\n6.Delete At Position\n7.Display\n8.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter element\n");
			        scanf("%d",&item);
			        insertBegin(item);
			        break;
			case 2:printf("Enter element\n");
			       scanf("%d",&item);
			       insertEnd(item);
			       break;
			case 3:printf("Insert element\n");
			       scanf("%d",&item);
			       printf("Insert Position\n");
			       scanf("%d",&pos);
			       insertPosition(item,pos);
			        break;
			case 4: deleteBegin();
			        break;
			case 5: deleteEnd();
			        break;
			case 6:printf("Enter Position\n");
			       scanf("%d",&pos);
			       deletePosition(pos);
			       break;
			case 7: display();
			        break;
			default: exit(0);
				   
		}
	}
	getch();
	return 0;
}


