#include "common_c.h"
#include "offer_common.h"

typedef struct {
    int array[10000];
    int Size;
} Min_heap;

void Insert(Min_heap *heap, int val)
{
    ;
}

int Get_pop_min(Min_heap *heap)
{
    ;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize){
    *returnSize = 0;
    if (arr == NULL || arrSize == 0 || k == 0) {
        return NULL;
    }

    int i = 0;
    Min_heap heap;
    for (i = 0; i < arrSize; i++) {
        Insert(&heap, arr[i]);
    }
    int *p = (int *)malloc(k * sizeof(int));
    for (i = 0; i < k; i++) {
        p[i] = Get_pop_min(&heap);
    }

    return p;
}

/**
 * @brief test main()
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv)
{
    leetcode_func();
    printf("result is %d\n", 1);

    return 1;
}
