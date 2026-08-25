#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

   
    unordered_set<int> seen(nums.begin(), nums.end());


    int multiple = k;

  
    while (seen.count(multiple)) {
        multiple += k;
    }

    cout << "Smallest missing positive multiple: " << multiple << endl;

    return 0;
}
