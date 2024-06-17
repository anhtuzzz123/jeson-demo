#include<stdio.h>
#include<math.h>
#include <stdio.h>

long long fibo(int n) {
    long long a = 0, b = 1, sum = a + b, tmp;

    for (int i = 2; i < n; i++) {
        tmp = a + b;
        a = b;
        b = tmp;
        sum += b;
    }

    return sum;
}
int main(){
  int n;
  scanf("%d",&n);
  printf("%lld",fibo(n));
    }
