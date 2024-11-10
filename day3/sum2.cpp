// sum of all odd numbers from 1 to n

#include <iostream>
using namespace std;

int main()
{
    double sum = 0;
    int n;
    cout << "please provide the number: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    cout << "sum of all odd numbers is :" << sum;
}
