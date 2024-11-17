#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 0, 33, -23, 77, -88, 71, 99};
    int length = sizeof(arr) / sizeof(int);
    int highest = INT8_MIN;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    cout << highest;
    return 0;
}