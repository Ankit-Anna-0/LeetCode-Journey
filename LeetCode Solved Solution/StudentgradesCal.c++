#include <iostream>
using namespace std;

int main()
{
    float marks[5];
    float total = 0, percentage;

    cout << "Enter marks for 5 subjects:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];

        total += marks[i];
    }

    percentage = total / 5;

    cout << "\nTotal Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else if (percentage >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
