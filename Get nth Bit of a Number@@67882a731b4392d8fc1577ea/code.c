#include <stdio.h>

int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    int bit_value = (a >> n) & 1;
    printf("%d\n",bit_value);
    return 0;
}