#include <iostream>
#include <vector>
using namespace std;
int single_element(vector<int> nums,int n){
for(int i=1;i<n-1;i++){
    if(i==0){
        if(nums[i]!=nums[i+1]){
            return nums[i];
        }
    }
    else if(i==n-1){
        if(nums[i]!=nums[i-1]){
            return nums[i];
        }
    }
    else(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
        return nums[i];
    }
}

return -1;


}

int main(){
  vector<int>nums={1,1,2,2,3,4,4,5,5};
  int n=nums.size();
  
  int result=single_element(nums,n);
  cout<<result;
}