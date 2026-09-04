#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (freq == 0)
            {
                ans = nums[i];
            }

            if (ans == nums[i])
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }

        int count = 0;

        for (int val : nums)
        {
            if (val == ans)
            {
                count++;
            }
        }

        if (count > nums.size() / 2)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    auto result = obj.majorityElement(arr);

    cout << result;

    return 0;
}