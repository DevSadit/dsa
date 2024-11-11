#include <iostream>
using namespace std;

// int doSum(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }

void minNumber(double a, double b)
{
    a < b ? cout << a << " is the small number here." : cout << b << " is the small number here.";
}

int main()
{
    double a, b;
    cout << "Give me the first number";
    cin >> a;
    cout << "Give me the second number";
    cin >> b;

    minNumber(a, b);

        // int value = doSum(3, 5);
        // cout << value;

        return 0;
}