#include <iostream>
#include <vector>
using namespace std;
int upperbound(vector<int> nums,int n,int target){
 int low=0;
int high=n-1;
int ans=n;
while(low<=high){
     int mid=low+(high-low)/2;
     if(nums[mid]>target){
        ans=mid;
        high=mid-1;
     }
     else{
        low=mid+1;
     }
}
return ans;


}

int main(){
  vector<int>nums={1,3,5,6,7,9,10,15};
  int n=nums.size();
  int target=9;
  int result=upperbound(nums,n,target);
  cout<<result;
}