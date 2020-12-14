#include "common_c.h"
#include "offer_common.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* printNumbers(int n, int* returnSize){
    int * p = NULL;
    int i = 0, k = 1;

    while (n) {
        k = k * 10;
        n--;
    }

    k--;
    *returnSize = k;
    printf("k = %d", k);
    p = (int *) malloc(k * sizeof(int));
    for (i = 0; i < k; i++) {
        p[i] = i + 1;
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
    printNumbers();
    printf("result is %d\n", 1);

    return 1;
}
