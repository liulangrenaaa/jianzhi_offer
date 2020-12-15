#include "common_c.h"
#include "offer_common.h"





int hammingWeight(uint32_t n) {
    uint32_t i = 0;
    uint32_t x = 1;
    int res = 0;

    for (i = 0; i < 32; i++) {
        x = ((uint32_t)1 << i);
        if (n & x) {
            res++;
        }
    }
    return res;
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
    hammingWeight();
    printf("result is %d\n", 1);

    return 1;
}
