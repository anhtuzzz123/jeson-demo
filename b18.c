#include<stdio.h>
#include<string.h>
    char c[10000];
int main(){
    gets(c);
    int n=strlen(c);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=c[i]-'0';
    }
    printf("%d",sum);
    }
