#include <iostream>
#include <vector>
using namespace std;

void reverseVec(vector<int> &vec, int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {45, 22, 34, 88, 90, 12, 1, 93};
    int size = vec.size();
    reverseVec(vec, size);

    // Output the reversed vector
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}