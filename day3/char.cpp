#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "please enter the charracter here: ";

    cin >> letter;

    if ('a' >= letter && 'z' <= letter)
    {
        cout << "this charracter is a lowercase";
    }
    else
    {
        cout << "this charracter is a Uppercase";
    }
}
