#include<stdio.h>
#include<math.h>
int main(){
    float f,c;
    scanf("%f%f",&c,&f);

    printf("Tinh do C sang F la :%.2f\n",c*1.8+32);
    printf("Tinh do F sang C la :%.2f\n",(f-32)/1.8);
    }
