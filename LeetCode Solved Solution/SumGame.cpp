#include <iostream>
#include <string>
using namespace std;

bool sumGame(string num) {
    int n = num.size();

    int leftSum = 0;
    int rightSum = 0;

    int leftQ = 0;
    int rightQ = 0;

    // Left half
    for (int i = 0; i < n / 2; i++) {
        if (num[i] == '?') {
            leftQ++;
        } else {
            leftSum += num[i] - '0';
        }
    }

    // Right half
    for (int i = n / 2; i < n; i++) {
        if (num[i] == '?') {
            rightQ++;
        } else {
            rightSum += num[i] - '0';
        }
    }

    // Odd number of '?' -> Alice wins
    if ((leftQ + rightQ) % 2 == 1) {
        return true;
    }

    int diff = leftSum - rightSum;
    int qDiff = leftQ - rightQ;

    // If they cannot be balanced, Alice wins
    return diff != -9 * qDiff / 2;
}

int main() {
    string num;

    cout << "Enter string: ";
    cin >> num;

    if (sumGame(num)) {
        cout << "Alice wins" << endl;
    } else {
        cout << "Bob wins" << endl;
    }

    return 0;
}
