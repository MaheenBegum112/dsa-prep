#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool linearsearch(vector<int>& nums,int target,int n) {
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return true;
            }
        }
        return false;
    }
};

int main() {

    vector<int> nums = {0, 1, 0, 3, 12};
 int n=nums.size();
    Solution sol;
  int target=3;
    sol.linearsearch(nums,target,n);





    return 0;
}
