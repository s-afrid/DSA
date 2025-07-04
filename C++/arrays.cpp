#include<bits/stdc++.h>
using namespace std;
int main() {
    // Array are containers to store multiple values of same data type
    int arr[5] = {1,2,3,4,5}; // create an array of size 5 and type int
    cout << arr[0] << endl; // To access element by index

    arr[2] += 10; // We can modify the array element using index
    cout << arr[2] << endl;
    // 2D array - stores elements in form of nxm matrix
    int b[2][2] = {{1,2},{3,4}}; // 2x2 array - 2 rows and 2 columns
    cout << b[0][0] << endl; // access element from 1st row and 1st column
    
}