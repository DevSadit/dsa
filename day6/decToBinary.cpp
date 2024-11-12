#include <iostream>
using namespace std;

int decTobinary(int decinum)
{
    int ans = 0, power = 1;

    while (decinum > 0)
    {
        int remender = decinum % 2;
        decinum /= 2;

        ans += (remender * power);
        power *= 10;
    }
    return ans;
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
       cout << i << "-->>" <<decTobinary(i) << endl;
    }
    
    return 0;
}