#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number to check number is positive or negative or zero " << endl;
    int number;
    cin >> number;

    if (number > 0)
    {
        cout << "Number is positive " << endl;
    }
    else if (number < 0)
    {
        cout << "Number is negative " << endl;
    }
    else
    {
        cout << "Number is zero " << endl;
    }

    return 0;
}