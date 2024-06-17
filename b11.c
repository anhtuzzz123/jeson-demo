#include<stdio.h>
#include<math.h>
int gt(int n){
    int tich=1;
    for(int i=1;i<=n;i++){
        tich*=i;
    }
    return tich;
    }
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",gt(n));
    }
