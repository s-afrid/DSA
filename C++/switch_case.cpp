#include<bits/stdc++.h>
using namespace std;
int main() {
    int day;
    cout << "choose between 1 - 7: " << endl;
    cin >> day;
    // switch statements are similar to if-else but it uses choices based on the value of a variable
    switch (day) {
        case 1: 
            // If choice is 1 then this block is executed
            cout << "Monday" << endl;
            // break out if this is the choice after execution
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            // if none of the case are executed this default case is executed
            cout << "The is not between 1 - 7" << endl;
    }
}