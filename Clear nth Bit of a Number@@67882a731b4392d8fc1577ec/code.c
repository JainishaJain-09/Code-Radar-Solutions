#include <stdio.h>

int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    int mask = ~(1 << n);
    int updated_num = num & mask;
    printf("%d\n",updated_num);
    return 0;
}