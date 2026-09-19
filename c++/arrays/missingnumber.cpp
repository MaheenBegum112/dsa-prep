#include <iostream>
#include <vector>
using namespace std;
  
int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;
    int xor1 = 0, xor2 = 0;

    // XOR all array elements
    for (int i = 0; i < n - 1; i++) {
        xor2 ^= arr[i];
    }

    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    // Missing number is the XOR of xor1 and xor2
    return xor1 ^ xor2;
}


    // int n = arr.size() + 1;

    
    // for (int i = 1; i <= n; i++) {
    //     bool found = false;
    //     for (int j = 0; j < n - 1; j++) {
    //         if (arr[j] == i) {
    //             found = true;
    //             break;
    //         }
    //     }

        
    //     if (!found)
    //         return i;
    // }
    // return -1;
// }

int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    cout << missingNum(arr) << endl; 
    return 0;
}
