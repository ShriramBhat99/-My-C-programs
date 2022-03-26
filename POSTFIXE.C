/* C program to evaluate postfix expression*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
int stack[100];
int top=-1;
int ev_postfix(char *);
int operation(char,int,int);
int main()
{
	char postfix[100];
	clrscr();
	printf("Enter valid postfix expression\n");
	scanf("%s",postfix);
	printf("Result: %d",ev_postfix(postfix));
	getch();
	return 0;
}
int ev_postfix(char *postfix)
{
	int i,res;
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isdigit(postfix[i]))
		     stack[++top]=postfix[i]-'0';
		else
		{
		res=operation(postfix[i],stack[top-1],stack[top]);
		top=top-2;
		stack[++top]=res;
		}

	}
	return stack[top];
}

int operation(char operators, int op1, int op2)
{
	switch(operators)
	{
	 case '+': return (op1+op2);
	 case '-': return (op1-op2);
	 case '*': return (op1*op2);
	 case '/': return (op1/op2);
	 case '$':
	 case '^': return pow(op1,op2);
	 }
}

