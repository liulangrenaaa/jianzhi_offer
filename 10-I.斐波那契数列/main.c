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
































int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;

    int first = 1;
    int second = 1;
    int sum = 0;
    int i = 0;
    int this = 0;

    for (i = 2; i < n; i++) {
        this = (first + second) % 1000000007;
        first = second;
        second = this;
    }

    return this;
}
