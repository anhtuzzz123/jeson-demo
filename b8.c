
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max1=-1e9;
    for(int i=0;i<n;i++){
        if(a[i]>max1 && a[i]%2==1) max1=a[i];
    }
    printf("%d",max1);
    }
