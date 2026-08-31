#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;

        for (auto i : nums)
        {
            currSum += i;
            maxSum = max(currSum, maxSum);

            if (currSum < 0)
            {
                currSum = 0;
            }
        }

        return maxSum;
    }
};

int main()
{
    int n;

    cout << "Enter the number of values: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the values: ";

    for (auto &i : nums)
    {
        cin >> i;
    }

    Solution obj;
    auto result = obj.maxSubArray(nums);

    cout << "Maximum subarray sum = " << result;

    return 0;
}