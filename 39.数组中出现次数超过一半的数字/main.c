#include "common_c.h"
#include "offer_common.h"



int majorityElement(int* nums, int numsSize){
    if (!nums || numsSize == 0)
        return 0;
    int i = 0;
    int this = 0, count = 0;

    for (i = 0; i < numsSize; i++) {
        if (count ==0) {
            count++;
            this = nums[i];
        }else if (count > (numsSize / 2)) {
            return this;
        } else {
            if (this == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
    }

    return (count > 0)? this: 0;
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
