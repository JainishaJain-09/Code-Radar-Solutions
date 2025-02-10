#include <stdio.h>

int main(){
    float x;
    float y;
    scanf("%f",&x);
    scanf("%f",&y);
    x = x * y;
    printf("Product: %.2f",x);
    return 0;
}