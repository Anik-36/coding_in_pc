#include<stdio.h>
int main(){
    int I = 1;
    I = ++I ; //2
    I = I + ++I;
    printf("%d",I);
    return 0;
}
