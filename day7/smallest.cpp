#include <iostream>
using namespace std;

int main()
{
    int numbs[] = {45, 44, 22, 79, 12, 22, -66};
    int arrayLength = sizeof(numbs) / sizeof(int);
    int smallest = INT8_MAX;

    for (int i = 0; i < arrayLength; i++)
    {
        if (numbs[i] < smallest)
        {
            smallest = numbs[i];
        }
        }
    cout << smallest;
}