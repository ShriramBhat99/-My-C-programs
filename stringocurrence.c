#include<stdio.h>
/* C Program to find occurence of the string in an given string*/

#include<string.h>
int main()
{
	char s1[20],s2[20],s3[10];int count=0,i,j,k;
	printf("Enter first string\n");
	scanf("%s",s1);
	printf("Enter second string\n");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		j=i;
	     while(k<strlen(s2))
		{
		   s3[k]=s1[j];
		   j++;
		   k++;
	    }

		if(strcmp(s2,s3)==0)
		       count++;
		k=0;      
	}
	printf("%d",count);
}
