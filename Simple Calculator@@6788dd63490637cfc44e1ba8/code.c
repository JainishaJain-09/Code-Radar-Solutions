#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
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