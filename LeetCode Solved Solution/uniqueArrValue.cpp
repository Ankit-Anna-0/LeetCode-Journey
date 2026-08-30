#include <iostream>

using namespace std;

int main()
{

    int arr[] = {2, 4, 5, 2, 4, 7, 5, 9};
    int size = 8;

    for (int i = 0; i < size; i++)
    {
        bool unique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            cout << "Unique value: " << arr[i] << endl;
        }
    }
    return 0;
}