#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "please provide a number: ";
    cin >> n;

    if (n >= 0)
    {
        cout << "this is a positive number";
    }
    else
    {
        cout << "this is a negative number";
    }
    return 0;
}