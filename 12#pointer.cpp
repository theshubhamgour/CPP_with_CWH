/*

A pointer is a data type which holds the address of other data type.
The “&” operator is called “address off" operator, and
the "*” operator is called “value at” dereference operator

*/

#include <iostream>
using namespace std;
int main()
{
    int a = 49;
    int *b = &a;
    cout << "Value of A: " << a << endl;
    cout << "Value of Address of A: " << &a << endl;

    cout << "Value of B: " << *b << endl; // de-referencing
    cout << "Value of Address of B: " << &b << endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;
}