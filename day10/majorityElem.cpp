#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// brute force approach
// int majority(vector<int> nums, int n)
// {
//     for (int val : nums)
//     {
//         int fq = 0;
//         for (int elem : nums)
//         {
//             if (elem == val)
//             {
//                 fq++;
//             }
//         }
//         if (fq > n / 2)
//         {
//             return val;
//         }
//     }
//     return -1;
// }

// sorting approach
// int majority(vector<int> nums, int n)
// {
//     // sort
//     sort(nums.begin(), nums.end());

//     int freq = 1, ans = nums[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             freq++;
//         }
//         else
//         {
//             freq = 1;
//             ans = nums[i];
//         }
//         if (freq > n / 2)
//         {
//             return ans;
//         }
//     }
//     return ans;
// }

// mores votting algorithm
int majority(vector<int> nums, int n)
{
    int feq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (feq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            feq++;
        }
        else
        {
            feq--;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 4, 2, 2, 1, 4, 4, 4, 4};
    int n = nums.size();

    int result = majority(nums, n);
    cout << result;
    return 0;
}