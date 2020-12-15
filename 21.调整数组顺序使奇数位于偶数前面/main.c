#include "common_c.h"
#include "offer_common.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* exchange(int* nums, int numsSize, int* returnSize){
    if (nums == NULL || numsSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    if (numsSize == 1) {
        *returnSize = 1;
        return nums;
    }

    int i = 0, h = 0, l = numsSize - 1;
    int tmp = 0;

    while(h < l) {
        while (h < l && nums[h] % 2 == 1) {
            h++;
        }

        while (h < l && nums[l] % 2 == 0) {
            l--;
        }

        if (h < l) {
            tmp = nums[h];
            nums[h] = nums[l];
            nums[l] = tmp;
        }
    }
    *returnSize = numsSize;

    return nums;
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
    exchange();
    printf("result is %d\n", 1);

    return 1;
}
