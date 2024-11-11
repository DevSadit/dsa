
// charracter pattern
#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    char letter = 'A';

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << letter;
            letter++;
        }
        cout << endl;
    }
}

// output

//ABC
// DEF
// GHI