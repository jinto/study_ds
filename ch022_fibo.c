// 피보나치 수열 (재귀)
// Fibonacci

#include <stdio.h>

int fibo(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    return fibo(n-1) + fibo(n-2);
}

int main(int argc, char* argv[]) {
    for(int i = 1; i < 10; i++)
        printf("%d:%d\n",i, fibo(i));
}
