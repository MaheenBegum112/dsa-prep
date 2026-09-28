// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// class Solution {
// public:

//     vector<int> leaders(vector<int>& nums, int n) {

//         int maxi = INT_MIN;
//         vector<int> ans;

//         for(int i = n - 1; i >= 0; i--) {

//             if(nums[i] > maxi) {
//                 ans.push_back(nums[i]);
//                 maxi = nums[i];
//             }
//         }

//         return ans;
//     }
// };

// int main() {

//     vector<int> nums = {10, 45, 3, 2, 7, 90};
//     int n = 6;

//     Solution sol;

//     vector<int> ans = sol.leaders(nums, n);

//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int arr[N];

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        unordered_map<int, int> mp;

        for (int i = 0; i < N; i++) {
            mp[arr[i]]++;
        }

        for (auto x : mp) {
            cout << x.first << " " << x.second << endl;
        }
    }

    return 0;
}