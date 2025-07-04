#include<bits/stdc++.h>
using namespace std;
int main() {
    // while loop is a loop that runs until a condition is not satisfied
    int count = 0;
    while (count < 5) {
        cout << "Hello World " << count << endl;
        count ++ ;
    }
    int j = 1;
    // do-while loop executes the block first and then checks the condition
    do {
        cout << "Hello C++" << endl;
        j++;
    } while (j <= 5);
}