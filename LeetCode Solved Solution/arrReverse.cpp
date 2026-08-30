#include <iostream>

using namespace std;

void arrReverse(int arr[], int sz)
{
    int start = 0, end = sz-1;
    while (start < end)
    {
        swap(arr[start], arr[end]);    
        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {34, 32, 5, 23, 44, 9};
    int sz = 6;

    arrReverse(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    
}