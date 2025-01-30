#include <stdio.h>

// 2. Fibonacci Sequence (Recursive version)
void printFibonacci(int a, int b, int n) {
    if(n==0){
        return;
    }
    printf("%d", a);
    return printFibonacci(b, a+b, n-1);
}

int main(){
    printFibonacci(0,1,5);
    return 0;
}