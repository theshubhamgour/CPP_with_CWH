/*

*Call by Value in C++
                        Call by value is a method in C++ to pass the values to the function arguments. In case of call by value the copies
                        of actual parameters are sent to the formal parameter, which means that if we change the values inside the function
                        that will not affect the actual values.

*/

#include <iostream>
using namespace std;

// int swap(int a, int b)   //this will not give any output
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }


int swapointer(int* a, int* b)   //Call by Reference in C++
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "The value of A is : " << a << " The Value of B is  :" << b << endl;
    swapointer(&a, &b);
    cout<<"After Swapping: "<< "The value of A is : " << a << " The Value of B is  :" << b << endl;
}