/*
What are Arrays in C++
An array is a collection of items which are of the similar type stored in contiguous memory locations.
Sometimes, a simple variable is not enough to hold all the data.
For example, let’s say we want to store the marks of 2500 students; initializing 2500 different variable for this task is not feasible.
*/

#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 45, 67, 8};
    cout << "The Value is: " << marks[0] << endl;
    cout << "The Value is: " << marks[1] << endl;
    cout << "The Value is: " << marks[2] << endl;
    cout << "The Value is: " << marks[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    // pointers and arrays
    int *p = marks;
    cout << "The value of marks[0] : " << *p << endl;
    cout << "The value of marks[1] : " << *(p + 1) << endl;
    cout << "The value of marks[2] : " << *(p + 2) << endl;
    cout << "The value of marks[3] : " << *(p + 3) << endl;
}