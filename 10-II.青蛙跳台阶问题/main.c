#include "common_c.h"
#include "offer_common.h"

/**
 * @brief
 *
 * @param n
 * @return int
 */

int numWays(int n){
    int first = 1;
    int second = 1;
    int temp = 0;

    while (n--) {
        temp = first + second;
        first = second;
        second = temp % 1000000007;
    }

    return first;
}

int numWays1(int n){
    if (n <= 1)
        return 1;

    return numWays(n - 1) + numWays(n - 2);
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
    int result = numWays(7);
    printf("result is %d\n", result);

    return 1;
}












int numWays(int n){
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int i = 0, num1 = 1, num2 = 2, this = 0;
    for (i = 2; i < n; i++) {
        this = (num1 + num2) % 1000000007;
        num1 = num2;
        num2 = this;
    }

    return this;
}
