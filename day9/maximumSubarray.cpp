#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int sum = 0;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
             cout << " ";
        }
        cout << endl;
    }
}