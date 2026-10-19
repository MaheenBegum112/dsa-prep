#include <iostream>
#include <vector>
using namespace std;
int findsqrt(int n){
    int ans=0;
            int low=1;int high=n;
        while(low<=high) {
            long long mid=low+(high-low)/2;
            long long val=mid*mid;
            if(val<=n) {
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }

        return ans;
//     int ans=1;
//     for(int i=1;i<=n;i++){
//         if(i*i<=n){
//             ans=i;
//         }
//         else{
//             break;
//         }
   
// }

//  return ans;
}

int main(){
    
 long long   n=28;
  
  int result=findsqrt(n);
  cout<<result;
}