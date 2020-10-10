#include "common_c.h"
#include "offer_common.h"

int findRepeatNumber(int* nums, int numsSize){
    int i = 0;
    int i_val = 0;
    int temp = 0;

    for (i = 0; i < numsSize; i++) {
        while (i != nums[i]) {
            i_val = nums[i];
            // printf("i = %d, i_val = %d\n", i, i_val);

            if (i_val == nums[i_val]) {
                return i_val;
            }

            temp = nums[i];
            nums[i] = nums[i_val];
            nums[i_val] = temp;
            // show_array_num(nums, numsSize);
            // sleep(1);
        }

    }

    return -1;
}


int main(int argc, char **argv)
{
    int array[] = {2, 2, 5, 4, 3, 1, 6, 7};
    int num = 0;
    int array_size = sizeof(array) / sizeof(array[0]);

    printf("array_size is %d\n", array_size);
    show_array_num(array, array_size);

    num = findRepeatNumber(array, array_size);
    printf("result is %d\n", num);

    return 1;
}
