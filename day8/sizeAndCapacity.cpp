// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {

//     vector<int> vec;
//     cout << "while initializing, value:" << vec.size() << " capacity:" << vec.capacity() << endl;

// vec.push_back(34);
// vec.push_back(67);
// vec.push_back(23);

// cout << "2. value:" << vec.size() << " capacity:" << vec.capacity() << endl;

// vec.push_back(34);
// vec.push_back(67);
// vec.push_back(23);

// cout << "3. value:" << vec.size() << " capacity:" << vec.capacity() << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;      // Declare N (size of the array) and X (element to search)
    cin >> N >> X; // Read N and X from input

    int A[N]; // Declare an array of size N
    for (int i = 0; i < N; i++)
    {
        cin >> A[i]; // Read the array elements
    }

    bool found = false; // Variable to track if X is found
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            found = true; // Element found
            break;        // Exit loop early
        }
    }

    if (found)
    {
        cout << "YES" << endl; // Print YES if X is found
    }
    else
    {
        cout << "NO" << endl; // Print NO if X is not found
    }

    return 0;
}
