#include <iostream>

using namespace std;

int BinaryToDecimal(int n)
{   int binNum = n;
    int power = 1, ans= 0;
    
    while (binNum > 0)
    {
        int rem = binNum % 10;
        binNum = binNum / 10;
        ans += (rem * power);
        power = power * 2;
    }
    return ans;
}

int main(){

    int n;
    cin >> n;
    cout << BinaryToDecimal(n);

}