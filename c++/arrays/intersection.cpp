#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> findIntersection(int arr1[], int arr2[], int n, int m) {
        vector<int> ans;

        
        int i = 0, j = 0;


        while (i < n && j < m) {
            
            if (arr1[i] < arr2[j]) {
                
                
                i++;  
            }
            
            else if (arr2[j] < arr1[i]) {
                
                j++;  
            }
            else {
               
                    ans.push_back(arr1[i]);
                i++;
                 j++;  
            }
        }   
return ans;
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    Solution obj;
    vector<int> result = obj.findIntersection(arr1, arr2, n, m);

    cout << "Intersection of arr1 and arr2 is: ";
    for (int x : result) {
    cout << x << " ";
}
    
    return 0;
}
