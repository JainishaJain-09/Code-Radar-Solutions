#include<stdio.h>
void printBinary(int n){
    if(n>1){
        printfBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printBinary(num);
    printf("\n");
    return 0;
}