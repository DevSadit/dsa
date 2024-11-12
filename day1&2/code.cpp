#include <iostream>
using namespace std;

int main()
{
    // primitive data types

    // int age = 19;
    // char grade = 'A';
    // float num = 100.67f;
    // cout << "Sh \nEhesan's age is " << age << endl;
    // cout << "He is studying in " << grade << endl;
    // cout << "He got " << num << endl ;

    // implicit type casting
    // char grade = 'a';
    // int value = grade;
    // cout << value;

    // explicit type casting
    // double price = 199.33;
    // int newPrice = (int)price;
    // cout << newPrice;

    // taking the input from user
    // int age;
    // cout << "Enter your age : ";
    // cin >> age;
    // cout << "Your age is : " << age << endl;

    // arrithmatic operators
    // int a = 15, b = 25;
    // int sum = a + b;
    // int dif = b - a;
    // int mul = a * b;
    // int divission = b / a;
    // float modulo = b % a;
    // cout << "Sum = " << sum << endl;
    // cout << "difference = " << dif << endl;
    // cout << "Multification = " << mul << endl;
    // cout << "Divission = " << divission << endl;
    // cout << "modulo = " << modulo << endl;

    // relational operators
    // <, >, <= , >= , !=

    // cout << (3 < 5) << endl;

    // logical operator
    // || logical or
    // && logical and
    // !  logical not

    cout << !(3 < 5) << endl;
    cout << ((3 < 5) || (3 > 4)) << endl;
    cout << ((3 < 5) && (3 > 4)) << endl;

    // unary operators
    // incremental operator :
    // 1. pre-incremental operator ++a (update & work)
    // 2. post-incremental operator a++ (work & update)

    // decremental operator :
    // 1. pre-decremental operator --a (update & work)
    // 2. post-decremental operator a-- (work & update)
    return 0;
}