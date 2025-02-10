#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int msb_mask = 1 << 31;
    if (a & msb_mask){
        printf("Set\n");
    } else{
        printf("Not Set\n");
    }
    return 0;
}