#include "common_c.h"
#include "offer_common.h"

int sumNums(int n){
    return (n ^ 1)? (sumNums(n - 1) + n): 1;

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
