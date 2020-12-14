#include "common_c.h"
#include "offer_common.h"

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findContinuousSequence(int target, int* returnSize, int** returnColumnSizes){

    int left = 0;
    int right = numsSize - 1;

    int **p = (int *)malloc(2 * sizeof(int));
    while (left < right) {
        if (nums[left] + nums[right] < target) {
            left++;
        } else if (nums[left] + nums[right] > target) {
            right--;
        } else if (nums[left] + nums[right] == target) {
            break;
        }
    }
    if (left == right) {
        *returnSize = 0;
        return NULL;
    } else {
        *returnSize = 2;
        p[0] = nums[left];
        p[1] = nums[right];
        return p;
    }

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
