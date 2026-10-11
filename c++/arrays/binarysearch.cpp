#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> nums,int low,int high,int target){
    if(low>high){
        return -1;
    }
  int mid=low+(high-low)/2;
  if(nums[mid]==target){
    return mid;
  }
  else if(target>nums[mid]){
    low=mid+1;
   return  binarysearch(nums,low,high,target);
  }
  else{
    high=mid-1;
    return binarysearch(nums,low,high,target);
  }
  return -1;
}
int main(){
  vector<int>nums={1,3,5,6,7,9,10,15};
  int n=nums.size();
  int result=binarysearch(nums,0,n-1,9);
  cout<<result;
}