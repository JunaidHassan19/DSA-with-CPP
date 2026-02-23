#include <iostream>
using namespace std;

// Given an array of stock prices, find the maximum profit that can be made by buying and selling a single stock. You must buy before you sell.
void maxProfit(int *prices, int len)
{
  int bestBuy[100000];  // Assuming the maximum length of the prices array is 100000
  bestBuy[0] = INT_MAX; // Initialize the first element to a very large value
  for (int i = 1; i < len; i++)
  {
    // Update the best buy price up to the current day
    bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
  }
  int maxProfit = 0; // Initialize max profit to 0
  for (int i = 0; i < len; i++)
  {
    // Calculate the profit if we sell on the current day
    int currProfit = prices[i] - bestBuy[i];
    // Update max profit if the current profit is greater than the max profit found so far
    maxProfit = max(maxProfit, currProfit);
  }
  cout << "Max Profit = " << maxProfit << endl;
}

int main()
{
  int prices[6] = {7, 1, 5, 3, 6, 4};
  int len = sizeof(prices) / sizeof(int);

  maxProfit(prices, len);
  return 0;
}