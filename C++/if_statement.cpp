#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) // if age is greater than or eqaul to 18
    {
        // Execute this block of code if the condition is true
        cout << "You are an adult" << endl;
    }
    else if(age >=0 && age < 18) {
        // Execute this block of code if the first condition is false
        // and second condition is true
        cout << "You are not an adult" << endl;
    }
    else {
        // If all contidions are false this is executed
        cout << "I doubt you will see this printed! :)" << endl;
    }
    return 0;
}