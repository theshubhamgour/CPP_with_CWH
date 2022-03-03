/*
*Why use classes instead of structures?

Classes and structures are somewhat the same but still, they have some differences. 
For example, we cannot hide data in structures which means that everything is public 
and can be accessed easily which is a major drawback of the structure because structures 
cannot be used where data security is a major concern. Another drawback of structures is that we cannot add functions in it.

Classes in C++

Classes are user-defined data-types and are a template for creating objects. 
Classes consist of variables and functions which are also called class members.

*Public Access Modifier in C++
All the variables and functions declared under public access modifier will be available
 for everyone. They can be accessed both inside and outside the class. Dot (.) operator is used in
  the program to access public data members directly.

*Private Access Modifier in C++
All the variables and functions declared under a private access modifier can only be used inside the class. 
They are not permissible to be used by any object or function outside the class.

*/

#include<iostream>
using namespace std;

class employee
{
private:
    int a,b,c;
public:
    int d,e;
    void setData(int a1,int b1,int c1); //declaration
    void getData(){
        cout<<"The Value of A is: "<<a<<endl;
        cout<<"The Value of B is: "<<b<<endl;
        cout<<"The Value of C is: "<<c<<endl;
        cout<<"The Value of D is: "<<d<<endl;
        cout<<"The Value of E is: "<<e<<endl;
    }

};

void employee :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}


int main(){
    employee harry;
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}
