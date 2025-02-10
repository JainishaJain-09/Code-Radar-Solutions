#include <stdio.h>

int main(){
    int counttrailingzeroes(unsigned int a){
        if (a == 0)return 32;
        int count = 0;
        while ((a & 1) == 0){
            count++;
            a >>= 1;
        }
        return count;
    }
}
int msin(){
    unsigned int a;
    scanf("%u",&a);
    printf("%d\n",counttrailingzeroes(a));
    return 0;
}