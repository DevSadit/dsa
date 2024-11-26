#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // syntax
    // for (type variableName : arrayName){your code}
    vector<int> vec = {44, 66, 7, 12, 99, 61};

    for (int i : vec)
    {
        cout << i << endl;
    }
    return 0;
}