#include<stdio.h>
#include<math.h>
int ck(int n){
    int tmp=n,sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(n/i != i) sum+=n/i;
        }
    }
    if(sum==tmp*2) return 1;
    else return 0;

    }
    int main(){
        int n;
        scanf("%d",&n);
        if(ck(n)) printf("YES");
        else printf("No");
        }
