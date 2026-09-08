#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size()-1;
        int maxWater = 0;
        while(lp < rp){
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int area = w * ht;
            maxWater = max(maxWater,area);
            height[lp] < height[rp]? lp++:rp--;
        }
        return maxWater;
    }
};

int main(){
    int n;
    cout << "Enter container Heights : ";
    cin >> n;
    cout << "Enter heights value : ";

    vector<int> arr(n);
    for(int &x : arr){
        cin >> x;
    }
    Solution obj;
    int result = obj.maxArea(arr);
    cout << result;
}