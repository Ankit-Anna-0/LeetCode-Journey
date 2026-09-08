#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxBuy = 0;
        int bestBuy = prices[0];

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] > bestBuy)
            {
                maxBuy = max(maxBuy, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxBuy;
    }
};

int main()
{
    int n;
    cout << "Enter the number of prices: ";
    cin >> n;

    cout << "Prices values";

    vector<int> arr(n);
    for (int &i : arr)
    {
        cin >> i;
    }
    Solution obj;

    int result = obj.maxProfit(arr);
    cout << result;
}