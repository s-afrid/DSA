#include<bits/stdc++.h>
using namespace std;
// functions are a containers that stores a block of code that can executed multiple times when function is called 
// all functions have a return value that can stored in a variable by simple assigning with '='
void hello() {
    // functions with return type void doesn't return any value
    cout << "This doesn't return anything" << endl;
}
void greet(string name)
{
    //A function contains parameter that can obtain its value at the call time
    //These values are called arguments
    cout << "Hello " << name << endl;
}
int add(int a, int b)
{
    return a+b; // the return value can stored in a variable
}
void change(string &s) {
    // Parameter is now taken as the address of the value passed
    // change in parameter will cause change in original value
    s[0] = 't';
    cout << s << endl;
}
int main() {
    hello(); // to execute the code call the function by its name
    string name = "Afrid";
    greet(name); // name is passed as argument

    int num1,num2;
    num1 = 2;
    num2 = 8;
    int sum = add(num1,num2); // the return value is stored in a variable of same data type
    cout << sum << endl;
    string s = "raj";
    change(s);
    cout << s << endl;
    return 0;
}