#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int profit = 0, buy = prices[0];

        for (int price : prices)
        {
            buy = min(buy, price);
            profit = max(profit, price - buy);
        }
        return profit;
    }
};

int main()
{
    int n;
    cout << "Enter number of prices: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter prices: ";

    for (int &x : arr)
        cin >> x;

    Solution obj;
    cout << "Maximum Profit: " << obj.maxProfit(arr);

    return 0;
}
