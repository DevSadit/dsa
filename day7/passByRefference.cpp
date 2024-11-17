// #include <iostream>
// using namespace std;

// int VariableFn(int a, int b)
// {
//     a = a * 10;
//     b = b * 5;

//     cout << "in variable fn " << a << " " << b << endl;
// }

// int main()
// {
//     int x = 5, y = 4;
//     VariableFn(x, y);
//     cout << "in maib fn " << x << " " << y << endl;
//     return 0;
// }

// in this demo we can see that when we send variable to an another function from our main function then that another function (VariableFn) cant change the actual value of x and y. beacause that another file just can copy the variable from the main function .

// => But in array its totally different. it can change the actual raw value. lets see that in the bottom.

#include <iostream>
using namespace std;

void VariableArray(int arr[], int size)
{
    cout << "in 2nd fn " << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 10;
    }
}

int main()
{
    int arr[5] = {3, 2, 9,5};
    int size = 5;

    
    VariableArray(arr, size);



    cout << "in main \n";
    for (int i = 0; i < size; i++)
    {
       
        cout << arr[i] << " " << endl;
    }
    return 0;
}