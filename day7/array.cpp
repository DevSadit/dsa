#include <iostream>
using namespace std;

int main()
{
    // initializing an array with fixed value.
    int marks[5] = {5, 3, 5, 6, 0}; //--> 1 value = 4 bytes
    // cout << sizeof(marks); --> 20 bytes
    //
    int prices[] = {45, 33, 23, 5};
    //
    // getting the length of the array.
    int length = sizeof(prices) / sizeof(int);
    // cout << length;
    // acces the value of array with using loop
    for (int i = 0; i < length; i++)
    {
        cout << prices[i] << endl;
    }
}