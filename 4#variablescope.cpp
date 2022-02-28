/*
*Variable Scope
The scope of a variable is the region in the program where the existence of that variable is valid.

*Variables can be classified into two types:

                                            *Local variables
                                            *Global variables

*Local variables:
    Local variables are declared inside the braces of any function and can be assessed only from there.

*Global variables:
    Global variables are declared outside any function and can be accessed from anywhere.

*/

#include <iostream>
using namespace std;

void add(){
    int adc = 6;
    cout<<"\n\nThe value of Globle variable is: "<<adc<<endl<<endl;
}
int main()
{
    int a = 4;
    float b = 5.89;
    char c = 's';
    bool d = true; // 1 is true, 0 is false
    cout << "The value of integer A is: " << a << endl;
    cout << "The value of float B is: " << b << endl;
    cout << "The value of Character C is: " << c << endl;
    cout << "The value of Boolean D is: " << d << endl;

    // Accessing Globle variable
    add();
}