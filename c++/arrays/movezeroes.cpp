#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void moveZeroes(vector<int>& nums) {

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {

                swap(nums[i], nums[j]);

                j++;
            }
        }
    }
};

int main() {

    vector<int> nums = {0, 1, 0, 3, 12};

    Solution sol;

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";

    for (int num : nums) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}



// class Solution {
// public:
  
//     vector<int> moveZeroes(vector<int>& arr) {
        
//         vector<int> temp(arr.size(), 0);

        
//         int index = 0;

        
//         for (int i = 0; i < arr.size(); i++) {
            
//             if (arr[i] != 0) {
//                 temp[index] = arr[i];
//                 index++;
//             }
//         }

    
//         for (int i = 0; i < arr.size(); i++) {
//             arr[i] = temp[i];
//         }

        
//         return arr;
//     }
// };



  