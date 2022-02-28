/*
The sign "<<" is called insertion operator
The sign ">>" is called extraction operator
"cout" keyword is used to print
"cin" keyword is used to take input at run time.
*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter number A: ";
    cin>>a;
    cout<<"\n Enter number B: ";
    cin>>b;
    c = a+b;
    cout<<"THe resultant is: "<<c<<endl;
}