#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int small = arr[0];
    int large = arr[0];
    int smallIndex = 0;
    int largeIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < small) {
            small = arr[i];
            smallIndex = i;
        }

        if (arr[i] > large) {
            large = arr[i];
            largeIndex = i;
        }
    }

    cout << "Smallest number = " << small << endl;
    cout << "Smallest number index = " << smallIndex << endl;

    cout << "Largest number = " << large << endl;
    cout << "Largest number index = " << largeIndex << endl;

    return 0;
}
