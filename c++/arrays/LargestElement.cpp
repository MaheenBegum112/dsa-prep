#include <iostream>
using namespace std;

class LargestElement {
public:

    int largestElement(int arr[], int n) {

        int max = arr[0];

        for (int i = 1; i < n; i++) {

            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }
};

int main() {

    int arr[] = {10, 45, 3, 2, 7, 90};
    int n = 6;

    LargestElement sol;

    int result = sol.largestElement(arr, n);

    cout << "Largest element: " << result;

    return 0;
}