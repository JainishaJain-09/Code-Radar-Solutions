// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    
    if(a+b>c || b+c>a || c+a>b){
        printf("valid");
    }
    else{
        printf("invalid");
    }
}