#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // part one
    // star

    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // new

    for (int i = n; i > 0; i--)
    {

        // star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }

        //    star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
         cout << endl;
    }
}