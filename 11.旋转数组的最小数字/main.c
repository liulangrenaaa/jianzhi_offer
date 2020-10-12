#include "common_c.h"
#include "offer_common.h"

/**
 * @brief leetcode func
 *
 * @param nums
 * @param numsSize
 * @return int
 */
int minArray(int* numbers, int numbersSize){
    int left = 0, right = numbersSize - 1, mid = 0;

    while (left < right) {
        mid = (left + right) / 2;
        if (numbers[mid] > numbers[right]) {
            left = mid + 1;
        } else if (numbers[mid] < numbers[right]) {
            right = mid;
        } else {
            right--;
        }
    }

    return numbers[left];
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
    int a[] = {7, 8, 9, 4, 5, 6};
    /* int a[] = {3, 1}; */
    int result = 0;

    result = minArray(a, sizeof(a) / sizeof(a[0]));
    printf("result is %d\n", result);

    return 1;
}
