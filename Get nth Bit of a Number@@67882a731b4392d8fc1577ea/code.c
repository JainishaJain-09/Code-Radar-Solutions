#include <stdio.h>

int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    int result = (num >> n) & 1;
    printf("%d\n",result);
    return 0;
}