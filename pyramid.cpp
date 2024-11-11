// output
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;

// int main()
// {
//     int n = 10;
//     for (int i = 0; i < n; i++)
//     {
//         // for spaces
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // for numbers 1
//         for (int j = 1; j <= (i + 1); j++)
//         {
//             cout << j;
//         }
//         // for numbers 2
//         for (int j = i; j > 0; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // part one
        // 1. spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // 2. numbers
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // part two
        // 1. numbers
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}