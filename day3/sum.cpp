#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "provide the number: ";
    cin >> n;

    double sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum : " << sum << endl;
}