#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   int majorityelement(vector<int>& nums) {

    int candidate = 0;
    int count = 0;

    for(int x : nums) {

        if(count == 0) {
            candidate = x;
        }

        if(x == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    return candidate;
}
};

int main() {

    vector<int> nums = {2,2,3,3,1,2,2};
    int n = nums.size();
    

    Solution sol;

    int result = sol.majorityelement(nums);

    cout << result;

    return 0;
}

 // better solution
//      int threshold=n/2;
//     unordered_map<int,int>mp;
//     for(int x:nums){
//         mp[x]++;
//         if(mp[x]>threshold){
//             return x;
//         }
//     }
//     return -1;
// }

    // int count;
    //     for(int i=0;i<n;i++){
    //         count=0;
    //         for(int j=0;j<n;j++){
    //             if(nums[j]==nums[i]){
    //                 count++;
    //             }
    //         }
    //             if(count>n/2){
    //                 return nums[i];
                
    //         }
    //     }
     
    
