#include <stdio.h>

int main(){
    int a,position = 0;
    scanf("%d",&a);
    if (a == 0){
        printf("-1\n");
        return 0;
    }
    while((a & 1) == 0){
        a >>= 1;
        position++;
    }
    printf("%d\n",position);
    return 0;
}