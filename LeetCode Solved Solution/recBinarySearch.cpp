#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& arr, int tar, int st, int end) {

    // Base case
    if (st > end) {
        return -1;
    }

    int mid = st + (end - st) / 2;

    if (tar > arr[mid]) {
        return BinarySearch(arr, tar, mid + 1, end);
    }
    else if (tar < arr[mid]) {
        return BinarySearch(arr, tar, st, mid - 1);
    }
    else {
        return mid;
    }
}

int main() {
    vector<int> arr = {-1, 0, 5, 8, 10, 13, 24};
    int tar1 = 13;

    int result = BinarySearch(arr, tar1, 0, arr.size() - 1);

    cout << result;

    return 0;
}