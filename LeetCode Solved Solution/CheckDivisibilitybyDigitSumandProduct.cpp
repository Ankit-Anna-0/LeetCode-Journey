#include <iostream>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {

        int original = n;
        int digitSum = 0;
        int digitProduct = 1;

        while (n > 0) {
            int r = n % 10;

            digitSum = digitSum + r;
            digitProduct = digitProduct * r;

            n = n / 10;
        }

        int total = digitSum + digitProduct;

        return original % total == 0;
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;

    bool result = obj.checkDivisibility(n);

    cout << result << endl;

    return 0;
}