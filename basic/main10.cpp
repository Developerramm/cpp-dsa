#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number to get factorial of a number : " << endl;
    int number;
    cin >> number;

    long int ans = 1;

    for (int i = 2; i <= number; i++)
    {
        ans = ans * i;
    }

    cout << "factorial is " << ans << endl;

    return 0;
}