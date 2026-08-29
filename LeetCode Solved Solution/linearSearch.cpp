#include <iostream>

using namespace std;

int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {32, 4, 45, 22, 21, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 21;

    int result = linearSearch(arr, target, size);

    if (result != 0)
    {
        cout << "element found at index : " << result << endl;
    }
    else
    {
        cout << "element not found in the array" << endl;
    }

    return 0;
}