#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& arr, int tar) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) {
            st = mid + 1;
        }
        else if (tar < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {-1, 0, 5, 8, 10, 13, 24};
    int tar1 = 13;

    int result = BinarySearch(arr, tar1);

    cout << result;

    return 0;
}