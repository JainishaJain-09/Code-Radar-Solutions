#include<stdio.h>
int main(){
    char operator;
    int a,b,result;
    scanf("%c",&operator);
    scanf("&d",&a,&b);
    switch(operator){
        case '+':
        result=a+b;
        break;

        case '-':
        result=a-b;
        
        break;

        case '*':
        result=a*b;
        
        break;

        case '/':
        result=a/b;
        
        break;

        default:
        printf("error");
}
}// Your code here...