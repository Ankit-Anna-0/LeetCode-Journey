#include <iostream>

using namespace std;

int DecimalToBinary(int n)
{   int decNum = n;
    int power = 1;
    int ans= 0;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * power);
        power = power * 10;
    }
    return ans;
}

int main(){

    int n;
    cin >> n;
    cout << DecimalToBinary(n);

}