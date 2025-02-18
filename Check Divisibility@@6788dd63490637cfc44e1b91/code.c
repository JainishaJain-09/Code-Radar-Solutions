#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>11){
    if(a%5==0 && b%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    }
    return 0;
}