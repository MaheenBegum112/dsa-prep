#include <iostream>
using namespace std;

class Leftrotateone {
public:

    void rotate(int arr[], int n) {

        int temp = arr[0];

        for (int i = 1; i < n; i++) {
            arr[i - 1] = arr[i];
        }

        arr[n - 1] = temp;
    }
};

int main() {

    int arr[] = {10, 45, 3, 2, 7, 90};
    int n = 6;

    Leftrotateone sol;

    sol.rotate(arr, n);

    cout << "After left rotation: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}