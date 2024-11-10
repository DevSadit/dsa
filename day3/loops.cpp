#include <iostream>
using namespace std;

int main()
{
    cout << "How many times you want to print the text? :";
    int n;
    cin >> n;
    int i = 1;
    // while (i <= n)
    // {
    //     cout << i << " "  << "Learning  loop\n";
    //     i++;
    // }

    for (i = 0; i <= n; i++)
    {
        cout << "Learning the for loop\n";
    }
}