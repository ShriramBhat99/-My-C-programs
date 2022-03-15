/* C Program to conver Infix expresion to postfix expresion */
#include<stdio.h>
#include<conio.h>
#define MAX 50
char stack[MAX];
int top=-1;
void Postfix(char *,char *);
int pr(int);
int main()
{
char postfix[10], infix[10];
stack[++top]='#';
clrscr();
printf("Enter the infix expression\n");
scanf("%s",infix);
Postfix(infix,postfix);
printf("\npostfix expression is: %s\n", postfix);
getch();
return 0;
}
void Postfix(char *infix,char *postfix)
{
char symbol;
int i,j=0;
for(i=0;infix[i]!='\0';i++)
{
	symbol=infix[i];

       if(symbol=='(')
	{
		stack[++top]=symbol;
	}
	else if(symbol==')')
	{
		while(stack[top]!='(')
			postfix[j++]=stack[top--];
		top--;
	}
	else if(pr(symbol)==10)
	{
		postfix[j++]=symbol;
	}
	else
	{
		while(pr(symbol)<=pr(stack[top]))
			postfix[j++]=stack[top--];
		stack[++top]=symbol;
	}
}
	while(stack[top]!='#')
	     postfix[j++]=stack[top--];
	postfix[j]='\0';

}
int pr(int a)
{
switch(a)
{
case '#':return 0;

case '(':return 1;
case '+':
case '-':return 2;

case '*':
case '/':return 3;

case '$':
case '^':return 4;

default: return 10;
}
}

