/* C program to demonstrate Stack operations*/
#include<stdio.h>
#include<conio.h>
#define MAX 10
int stack[MAX];
int top=-1,count=MAX-1;
int push(int ele)
{
    int i;
    if(top==count)
    {
	  printf("\nStack is overflow");
	  return ;
    }
    else
    {
	stack[++top]=ele;
	printf("\n%d is inserted into stack\n",ele);
	return;
    }

}
int pop()
{
    if(top==-1)
    {
	printf("Stack is underflow\n");
	return;
    }
    else
    {
	printf("%d is poped from the stack\n",stack[top--]);
	return;
    }

}
int display()
{
    int i;
    if(top==-1)
    {
	printf("Stack is Empty\n");
	return;
    }
    else
    {
       for(i=0;i<=top;i++)
       {
	   printf("%d\t",stack[i]);
	}
	printf("\n");
	return;
    }

}
int main()
{
    int ele,num;
    clrscr();
    while(1)
    {
	printf("\n1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
	printf("Enter your choice:");
	scanf("%d",&num);
	printf("\n");
	switch(num)
	{
	    case 1:printf("Enter the number which you want to push:");
		   scanf("%d",&ele);
		   push(ele);
		   break;
	    case 2:pop();
		   break;
	    case 3:display();
		   break;
	    default : exit(0);

	}

    }
    getch();
    return 0;
}
