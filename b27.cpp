
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int s=0;
	for(int i=0;i<strlen(a);i++)
	{
		s=s+1;
		}
		printf("%d", s);
		}
