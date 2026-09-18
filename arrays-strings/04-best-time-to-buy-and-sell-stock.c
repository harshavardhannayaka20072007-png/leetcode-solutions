#include <stdio.h>
#include <limits.h>

int maxProfit(int *prices, int pricesSize) {
    int minPrice = INT_MAX;
    int maxProfitValue = 0;

    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfitValue) {
            maxProfitValue = prices[i] - minPrice;
        }
    }

    return maxProfitValue;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    printf("%d\n", maxProfit(prices, 6));
    return 0;
}
