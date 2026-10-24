#include <iostream>
using namespace std;

class  Solution {
public:

    int mindays(int day[], int n,int k) {
        int cnt=0;int nofB;
        for(int i=0;i<n;i++){
            if(day[i]<=day){
                cnt++;
            }
            else{
                nofB+=(cnt/k);
                cnt=0;
            }
        }
        nofB+=(cnt/k);
        if(nofB>=m){
            return -1;
        }
        else if(nofB==m){
            return i;
        }
        
    }
    
};

int main() {

    int day[] = {10, 45, 3, 2, 7, 90};
    int n = 6;

    Solution sol;
          for(int i=min(day);i<=max(day);i++){
       int result = sol.minelement(day, m,k);
    }
    

    cout << "minimun days: " << result;

    return 0;
}