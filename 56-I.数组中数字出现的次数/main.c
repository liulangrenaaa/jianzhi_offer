#include "common_c.h"
#include "offer_common.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize){
    int i = 0;
    int res = 0;

    while(i < numsSize) {
        res = res ^ nums[i];
        i++;
    }

    int div = 1;
    while ((div & res) == 0) {
        div = div << 1;
    }

    i = 0;
    int * arr = (int *) malloc(sizeof(int) * 2);
    arr[0] = 0;
    arr[1] = 0;
    while(i < numsSize) {
        if (div & nums[i]) {
            arr[0] = arr[0] ^ nums[i];
        } else {
            arr[1] = arr[1] ^ nums[i];
        }
        i++;
    }

    *returnSize = 2;
    return arr;
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
