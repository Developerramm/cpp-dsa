#include <iostream>
using namespace std;

int main()
{
    cout << "print 1 to N but Odd : " << endl;
    int number;
    cin >> number;

    for (int i = 1; i <= number; i = i + 2)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}