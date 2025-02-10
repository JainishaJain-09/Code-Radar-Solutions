#include<stdio.h>
void printBinary(unsigned int num){
    if(num>1)
    printfBinary(num>>1);
    printf("%d",num & 1);
}

int main()
{
    unsigned int num;
    scanf("%u",&num);
    printBinary(num);
    printf("\n");
    return 0;
}