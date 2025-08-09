#include <iostream>
using namespace std;

int main()
{
    cout << "Enter principal for si :  ";
    int p, r, t;
    cin >> p;
    cout << endl;
    cout << "Enter rate : " << endl;
    cin >> r;
    cout << "Enter time " << endl;
    cin >> t;

    double si = p * r * t * 0.01;

    cout << si << endl;

    return 0;
}