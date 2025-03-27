#include<bits/stdc++.h>
using namespace std;


int main() {

    string s;
    getline(cin, s);

    int last_digit  = s[s.size() - 1] - '0'; // ASCII value of last digit - ASCII value of 0 

    cout << last_digit;



}