/* C Program to encode the given string A,a=1 ,B,b=2, C,c=3......Z,z=26 */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void encode(char *);
int main()
{
	char ch[100];
	clrscr();
	printf("Enter your string\n");
	scanf("%[^\n]s",ch);
	encode(ch);
	getch();
	return 0;
}
void encode(char *ch)
{
	char capital,small;
	int i,no=0;
	printf("Encoded string is:\n");
	for (i=0;ch[i]!='\0';i++)
	{       no=0;
		for(capital='A',small='a';capital<='Z',small<='z';capital++,small++)
		{
			no++;
			if(ch[i]==capital||ch[i]==small)
			{
			  printf("%d ",no);
			  break;

			}
			else
			{
			 continue;
			}
		}
	}

}
