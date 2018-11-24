// 이진탐색알고리즘
// binary search
#include <stdio.h>
int bsearch(int ar[], int len, int target) {
    int first = 0;
    int last = len -1;
    int mid;
    while(first <= last) {
        mid = (int)((last+first)/2);
        printf("%d,%d,%d\n", ar[first], ar[mid], ar[last]);
        if(ar[mid] == target) return mid;
        if(ar[mid] > target) last = mid-1;
        if(ar[mid] < target) first = mid+1;
        //getchar();
    }
    return -1;
}
int main(int argc, char* argv[]) {
    int ar[] = {1,2,3,4,5};
    int r = bsearch(ar, 5, 5);

    printf("haha:%d\n", r);
}
