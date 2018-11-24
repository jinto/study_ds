// 이진탐색알고리즘 (재귀호출)
// binary search (recursive)

#include <stdio.h>

int bsearch(int ar[], int first, int last, int target) {
    int mid;

    if(first > last) return -1;
    mid = (int)((last+first)/2);

    printf("%d, %d, %d\n", first, mid, last);

    if(ar[mid] == target) return mid;
    if(ar[mid] > target) return bsearch(ar, first, mid-1, target);  // -1
    if(ar[mid] < target) return bsearch(ar, mid+1, last, target);  // -1
}

int main(int argc, char* argv[]) {
    int ar[] = {1,2,3,4,5,6,7,8,9,10};

    // 처음에 함수는 잘 구현하고, 
    // printf("11:%d\n",bsearch(ar, 1, 10, 11));
    // 으로 호출해서 한참 헤맸다.
    printf("11:%d\n",bsearch(ar, 0, 9, 11));
    printf("5:%d\n",bsearch(ar, 0, 9, 5));
    printf("3:%d\n",bsearch(ar, 0, 9, 3));
    printf("1:%d\n",bsearch(ar, 0, 9, 1));
    printf("9:%d\n",bsearch(ar, 0, 9, 9));
    printf("10:%d\n",bsearch(ar, 0, 9, 10));
}
