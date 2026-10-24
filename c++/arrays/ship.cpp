#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int daysReq(vector<int>& weights, int cap) {
        int n = weights.size();
        int days = 1;
        int load = 0;

        for (int i = 0; i < n; i++) {

            if (load + weights[i] > cap) {
                days++;
                load = weights[i];
            }
            else {
                load += weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int sum = accumulate(weights.begin(), weights.end(), 0);

        int maxWeight = *max_element(weights.begin(), weights.end());

        int low = maxWeight;
        int high = sum;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int ans = daysReq(weights, mid);

            if (ans <= days) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main() {

    vector<int> weights = {10, 45, 3, 2, 7, 90};

    int days = 2;

    Solution sol;

    int result = sol.shipWithinDays(weights, days);

    cout << "Minimum capacity: " << result;

    return 0;
}