#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT8_MIN;

    for (int str = 0; str < n; str++)
    {
        int currSum = 0;
        for (int end = str; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "the maximum subarray sum is " << maxSum << endl;
}