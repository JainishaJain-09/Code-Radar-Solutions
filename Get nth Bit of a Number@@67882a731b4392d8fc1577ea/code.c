#include <stdio.h>

int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    int bit_value = (num >> n) & 1;
    printf("%d\n",bit_value);
    return 0;
}