#include<stdio.h>
#include<math.h>
#include <string.h>
char c[100000];
int main()
{
    scanf("%s",c);
    int n=strlen(c);
    for(int i=n-1;i>=0;i--)
    {
        printf("%c",c[i]);
    }
}
