#include<stdio.h>
int main(){
    ch a,b;
    scanf("%c %c",&a,&b);
    switch(a,b){
        case '+':
        printf("a+b");
        break;

        case '-':
        printf("a-b");
        break;

        case '*':
        printf("a*b");
        break;

        case '/':
        printf("a/b");
        break;

        default:
        printf("error");
}
}// Your code here...