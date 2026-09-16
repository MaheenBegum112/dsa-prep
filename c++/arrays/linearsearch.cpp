#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int linearsearch(vector<int>& nums, int target, int n) {
        for(int i = 0; i < n; i++) {
            if(nums[i] == target) {
                return 1;
            }
        }
        return -1;
    }
};

int main() {

    vector<int> nums = {0, 1, 0, 3, 12};
    int n = nums.size();
    int target = 4;

    Solution sol;

    int result = sol.linearsearch(nums, target, n);

    cout << result;

    return 0;
}