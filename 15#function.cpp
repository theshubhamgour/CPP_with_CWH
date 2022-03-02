// do once use many times ~ Functions
#include <iostream>
using namespace std;

/*

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    cout << "Sum is : " << sum(num1, num2);
    return 0;

    */

//    Function Prototype
// type function-name (arguments)
// The function prototype is the template of the function which tells the details of the function e.g(name, parameters) to the compiler.
//  Function prototypes help us to define a function after the function call
int sum(int a, int b);
int main()
{
    int num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    cout << "Sum is : " << sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}