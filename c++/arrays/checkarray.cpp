#include <bits/stdc++.h>
using namespace std;

int checkarray(vector<int>& arr) {

    int n = arr.size();

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[i]){

                return false;
            }

        }

    }
 return true;
}

int main() {

    vector<int> arr = {10, 20, 5, 8, 15};

      bool ans=checkarray(arr);

   if (ans) cout << "True" << endl;

    else cout << "False" << endl;
    
    return 0;
}