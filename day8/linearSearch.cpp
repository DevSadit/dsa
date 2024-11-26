#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {34, 11, 56, 83, 40, 99};
    int target = 40;
    int size = vec.size();

    for (int i = 0; i < size; i++)
    {
        if (vec[i] == target)
        {
            cout << "the idx of the exact number is " << i;
            break;
        }
    }

    return 0;
}
