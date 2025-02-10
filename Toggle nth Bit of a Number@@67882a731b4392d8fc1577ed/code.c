#include <stdio.h>

int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    int updated_a = a ^ (1 << n);
    printf("%d\n",updated_a);
    return 0;
}