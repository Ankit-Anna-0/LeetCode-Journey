#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int srt = 0; srt < n; srt++)
    {
        for (int end = srt; end < n; end++)
        {
            for (int i = srt; i < end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
    
}