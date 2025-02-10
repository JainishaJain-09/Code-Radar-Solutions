#include <stdio.h>

int main(){
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    x = (x + y + z)/3;
    printf("Average: %.2f", x);
    return 0;
}