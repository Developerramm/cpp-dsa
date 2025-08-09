#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number to count number from 1 to n : " << endl;
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}