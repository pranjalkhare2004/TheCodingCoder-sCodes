#include<bits/stdc++.h>
using namespace std;

//declaring array size globally
//always use const
// const int n := 1e7; //10^7 1 followed by 7 zeros
//generally online coding platform declare array size globally 10^7 and locally 10^9
//you can also use 2e7, 3e7 ... but 10e7 that will be 1e8

// int arr[n];

int main() {
//   int n = 1e7; // if you declare locally like this you will a segmentation error
int n =  1e5;
int arr[n];
    arr[n-1] = 7;
    cout << arr[n-1];
}