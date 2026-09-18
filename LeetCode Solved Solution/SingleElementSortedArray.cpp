#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1]) {
                st = mid + 2;
            }
            else {
                end = mid;
            }
        }

        return nums[st];
    }
};

int main(){
    vector<int> n = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    Solution obj;

    int result = obj.singleNonDuplicate(n);
    cout << result;
    return 0;
}