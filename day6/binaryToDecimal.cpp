#include <iostream>
using namespace std;

int binaryToDecimal(int binNumber)
{
    int ans = 0, power = 1;
    while (binNumber > 0)
    {
        int remender = binNumber % 10;
        ans += (remender * power);

        binNumber /= 10;
        power *= 2;
    }
    return ans;
}

int main()
{
    cout << binaryToDecimal(110011);
    return 0;
}