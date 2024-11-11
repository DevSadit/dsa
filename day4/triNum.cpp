// output
// 1
// 22
// 333
// 4444

#include <iostream>
using namespace std;

// int main()
// {
//     int n = 4;
//     int numb = 1;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << (i + 1);
//             numb += 1;
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         int numb = 1;
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << numb;
//             numb += 1;
//         }
//         cout << endl;
//     }
// }
// output
// 1
// 12
// 123
// 1234

int main()
{

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}