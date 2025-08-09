#include <iostream>
using namespace std;

int main()
{

    cout << "Enter radius of circle " << endl;

    int radius;
    cin >> radius;

    int circumference = (2 * radius) * 22 / 7;

    cout << "circumference of circle is " << circumference << endl;

    return 0;
}