#include "common_c.h"
#include "offer_common.h"







// 0: 没有股票
// 1: 有股票
int maxProfit(int* prices, int pricesSize){
    if (prices == NULL || pricesSize == 0) {
        return 0;
    }

    int dp[pricesSize][2] = {0};
    int i = 0;
    dp[0][0] = 0;
    dp[0][1] = 0 - prices[0];
    for (i = 1; i < pricesSize; i++) {
        dp[i][0] = dp[i - 1][0] > dp[i - 1][1] + prices[i]? dp[i- 1][0]: dp[i - 1][1] + prices[i];
        dp[i][1] = dp[]
    }


}



int maxProfit(int* prices, int pricesSize){
    if (prices == NULL || pricesSize < 2) {
        return 0;
    }

    int max_profit = 0, low_price = prices[0];
    int i = 0;
    for (i = 1; i < pricesSize; i++) {
        low_price = low_price < prices[i]? low_price: prices[i];
        max_profit = max_profit > prices[i] - low_price? max_profit: prices[i] - low_price;
    }

    return max_profit;
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
