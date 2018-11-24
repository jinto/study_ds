// 이진탐색알고리즘
// binary search

#include <stdio.h>

int bsearch(int ar[], int len, int target) {
    int first = 0;
    int last = len -1;
    int mid;

    while(first <= last) {
        mid = (int)((last+first)/2);
        printf("%d, %d, %d\n", ar[first], ar[mid], ar[last]);

        if(ar[mid] == target) return mid;

        // ---------------------------------------
        // 이진트리 구현문제에서 실수하기 쉬운 부분
        //
        // -1, +1 이 없다면, 영원히 만나지 못한다.
        // mid 위치의 값을 검사한 다음에는 
        // last=mid 나, first=mid 가  아니라 
        // 그다음 위치로 가야 다음 숫자를 검사할 수 있다. 
        // ---------------------------------------
        if(ar[mid] > target) last = mid - 1;  // -1
        if(ar[mid] < target) first = mid + 1; // +1
    }
    return -1;
}

int main(int argc, char* argv[]) {
    int ar[] = {1,2,3,4,5,6,7,8,9,10};

    printf("5:%d\n",bsearch(ar, 10, 5));
    printf("3:%d\n",bsearch(ar, 10, 3));
    printf("1:%d\n",bsearch(ar, 10, 1));
    printf("9:%d\n",bsearch(ar, 10, 9));
    printf("10:%d\n",bsearch(ar, 10, 10));
}
