// floyads triangle pattern
// 1
// 23
// 456
// 78910

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     int numb = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << numb;
//             numb++;
//         }
//         cout << endl;
//     }
// }

// reverse triangle pattern

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        int numb = 1;
        for (int j = n - 1; j > 0; j--)
        {
            cout << (i + 1);
            numb += 1; 
        }
        cout << endl;
    }
}