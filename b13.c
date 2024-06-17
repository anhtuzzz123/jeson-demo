#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char c[1000];
    gets(c);
    int n=strlen(c);
    char max=c[0];
    for(int i=0;i<n;i++){
        max=fmax(max,c[i]);
    }
    printf("%c",max);
}
