#include <stdio.h>

int main(){
    unsigned int a;
    scanf("%u",&a);

    if (a == 0){
        printf("32\n");
        return 0;
    }
    int count = 0;
    while ((a & (1 << 31)) == 0){
        count++;
        a <<= 1;
   }
   printf("%d\n",count);
   return 0;
}