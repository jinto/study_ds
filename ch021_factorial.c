// 팩토리얼 (재귀 호출)
// factorial (recursion)

#include <stdio.h>

int factorial(int n) {
    if(n == 0) return 1;              // 탈출조건
    return n * factorial(n-1);
}

int main(int argc, char* argv[]) {
    printf("%d\n",factorial(1));
    printf("%d\n",factorial(2));
    printf("%d\n",factorial(3));
    printf("%d\n",factorial(6));
    printf("%d\n",factorial(10));
}
