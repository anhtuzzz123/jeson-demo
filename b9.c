#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int c[n+m];
    int k=0;
    int i=0,j=0;
    while(i<n && j <m){
        if(a[i]<=b[i]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    }
