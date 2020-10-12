#include "common_c.h"
#include "offer_common.h"

/**
 * @brief
 *
 * @param n
 * @return int
 */
int fib1(int n){
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);

}


int fib(int n){
	int constant = 1000000007;
	int first = 0;
	int second = 1;
	int temp = 0;

	while (n--) {
		temp = second + first;
		first = second;
		second = temp % constant;
	}

	return first;
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
    int result = fib(45);
    printf("result is %d\n", result);

    return 1;
}
