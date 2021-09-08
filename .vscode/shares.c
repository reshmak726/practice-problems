// Find maximum profit earned by buying and selling shares any number of times
// Stock Prices: {1, 5, 2, 3, 7, 6, 4, 5}

// Total profit earned is 10

// Buy on day 1 and sell on day 2
// Buy on day 3 and sell on day 5
// Buy on day 7 and sell on day 8
#include <stdio.h>
int maxprofit(int price[], int n)
{
    int profit = 0;
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i - 1] > price[i])
        {
            j = i;
        }
        if (price[i - 1] <= price[i] && (i + 1 == n || price[i] > price[i + 1]))
        {
            profit += (price[i] - price[j]);
            printf("buy on day %d and sell on day %d\n", j + 1, i + 1);
        }
    }
    return profit;
}
int main()
{
    int price[] = {1, 5, 2, 3, 7, 6, 4, 5};
    int n = sizeof(price) / sizeof(price[0]);
    printf("total profit earned is %d", maxprofit(price, n));
    return 0;
}