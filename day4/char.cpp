// square patterns of charracters
// demo:
// A B C D
// A B C D
// A B C D
// A B C D


#include <iostream>

using namespace std;

int main()
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        char letter = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << letter << " ";
            letter += 1;
        }
        cout << "\n";
    }
}