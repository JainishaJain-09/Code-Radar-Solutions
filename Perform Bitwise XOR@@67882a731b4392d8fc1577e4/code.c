#include <stdio.h>

int main(){
    int a,b,result;
    printf("");
    scanf("&d %d",&a,&b);
    result = a ^ b;
    printf("%d %d",a ^ b);
    return 0;
}