#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote !";
    }
    else
    {
        cout << "You cant vote!";
    }
}