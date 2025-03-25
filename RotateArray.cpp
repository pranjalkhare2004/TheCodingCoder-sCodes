#include <iostream>
using namespace std;


void reverse(int arr[], int start, int end) {



    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {

    k = k % n;

//rotating array  by k
/*
[0,1,2,3] -> 2 = [2,3,0,1]
*/
    reverse (arr, n-k, n-1);
    reverse (arr, 0, n-k-1);
    reverse (arr, 0, n-1);

  
}




int main() {
    
    int n;
    cout <<" enter array size: " << endl;
    cin >> n;

    
    int k;

    cout << "enter rotations to make" << endl;
    cin >> k;
    

    int* arr = new int[n];


    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArray(arr, n, k);
    
    // Print the rotated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }



    return 0;
}