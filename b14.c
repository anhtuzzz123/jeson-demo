#include<stdio.h>
int ucln(int a,int b){
    int res;
    while(b!=0)
    {
        res=a%b;
        a=b;
        b=res;
    }
    return a;
    }
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int bcnn=(a*b)/ucln(a,b);
    printf("%d %d",ucln(a,b),bcnn);
}
