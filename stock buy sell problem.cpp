#include<iostream>
using namespace std;
int stockmaxprofit(int price[], int start, int end)
{
    if (end <= start)//check if stock is empty
        return 0;
    int profit = 0;
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (price[j] > price[i]) {
 
                // current profit
                int curr_profit = price[j] - price[i]
                                  + stockmaxprofit(price, start, i - 1)
                                  + stockmaxprofit(price, j + 1, end);
 
                // maximum profit so far
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}
int main()
{
    int price[] = {20,56,89,450,55,70,330,67 };
    int n = sizeof(price) / sizeof(price[0]);
 
    cout << stockmaxprofit(price, 0, n - 1);
 
    return 0;
}
