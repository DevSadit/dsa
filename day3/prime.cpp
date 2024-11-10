// check if a number is  prime or not .

// logic
// supose if the number is 8 . then we need to check that the number (n) is divisible by (2 to 8) or not

#include <iostream>
using namespace std;

int main()
{
    bool isPrime = true;
    int numb;
    cout << "please provide the number you want to check: ";
    cin >> numb;

    if (numb <= 1)
    {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    }
    else
    {
        for (int i = 2; i < numb; i++)
        {
            if (numb % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    isPrime ? cout << "This number is a prime number!" : cout << "This number is not a prime number!";
}