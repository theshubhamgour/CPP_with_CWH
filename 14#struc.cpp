/*
*Structures in C++
The structure is a user-defined data type that is available in C++. Structures are used to combine different types of data types,
just like an array is used to combine the same type of data types.

*Unions in C++
Unions are similar to structures but they provide better memory management then structures.  Unions use shared memory so only
 1 variable can be used at a time.

 */

#include <iostream>
using namespace std;

struct emp
{
    int eid;
    char favchar;
    float salary;
};

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    struct emp barry;
    struct emp thorn;
    struct emp eedy;

    union money m1;
    m1.rice = 34;
    m1.car = 'S';
    m1.pounds = 1145.63;

    barry.eid = 45;
    barry.favchar = 'A';
    barry.salary = 12.55L;
    cout << "\n\nFor Barry\n\n"
         << endl;
    cout << "THe employee id is: " << barry.eid << endl;
    cout << "THe favourite character is: " << barry.favchar << endl;
    cout << "THe employee salary is: " << barry.salary << endl;

    cout << "\n\nFor Thorn\n\n"
         << endl;
    thorn.eid = 45;
    thorn.favchar = 'A';
    thorn.salary = 12.55L;

    cout << "THe employee id is: " << thorn.eid << endl;
    cout << "THe favourite character is: " << thorn.favchar << endl;
    cout << "THe employee salary is: " << thorn.salary << endl;

    cout << "\n\nFor Eedy\n\n"
         << endl;
    eedy.eid = 45;
    eedy.favchar = 'A';
    eedy.salary = 12.55L;

    cout << "THe employee id is: " << eedy.eid << endl;
    cout << "THe favourite character is: " << eedy.favchar << endl;
    cout << "THe employee salary is: " << eedy.salary << endl;

    // for union

    
    cout << "Rice: " << m1.rice<< endl;
    cout << "Car: " << m1.car << endl;
    cout << "pounds: " << m1.pounds<< endl;
}