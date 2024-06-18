#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int n;
    char c[10000];
    char a[20];
    gets(c);
    char *token= strtok(c," ");
    int max=-1e9;
    while(token != NULL)
    {
        n=strlen(token);
        if(n>max){
            max=n;
            strcpy(a,token);
        }
        token=strtok(NULL," ");
    }
    printf("%s",a);
}
