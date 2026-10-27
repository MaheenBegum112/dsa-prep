#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:

    int mindays(int day[], int n, int k, int m) {

        int mini = *min_element(day, day + n);
        int maxi = *max_element(day, day + n);

        for (int d = mini; d <= maxi; d++) {

            int cnt = 0;
            int nofB = 0;

            for (int i = 0; i < n; i++) {

                if (day[i] <= d) {
                    cnt++;     //no of blommed flowers
                }
                else {
                    nofB += cnt / k; //how many bouqets can be made
                    cnt = 0;
                }
            }

           
            nofB += cnt / k;

            if (nofB >= m) {
                return d;
            }
        }

        return -1;
    }
};

int main() {

    int day[] = {10, 45, 3, 2, 7, 90};

    int n = 6;
    int k = 2;
    int m = 3;

    Solution sol;

    int result = sol.mindays(day, n, k, m);

    cout << "Minimum days: " << result;

    return 0;
}