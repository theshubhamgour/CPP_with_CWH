/*
C++ Control Structures, If Else and Switch-Case Statement |

*Control Structures in C++
The work of control structures is to give flow and logic to a program. There are three types of basic control structures in C++.

*Sequence Structure
Sequence structure refers to the sequence in which program execute instructions one after another.

*Selection Structure
Selection structure refers to the execution of instruction according to the selected condition, which can be either true or false.

*Loop Structure
Loop structure refers to the execution of an instruction in a loop until the condition gets false.

*/


#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your age: ";
    cin >> a;

    // 1. Selection control structure: If else-if else ladder
    // if (a < 18 && a > 0)
    // {
    //     cout << "You are underage";
    // }
    // else if (a == 18)
    // {
    //     cout << "You can enter, however not welcome";
    // }
    // else
    // {
    //     cout << "You ar grown up, welcome to the party";
    // }


        // 2. Selection control structure: Switch Case statements
    switch (a)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
}