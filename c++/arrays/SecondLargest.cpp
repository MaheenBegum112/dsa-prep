#include <iostream>
using namespace std;

class SecondLargest {
public:

    int Second_largest(int arr[], int n) {
        int largest=-1;

        int secondlargest=-1;

        for(int i=0;i<n;i++){

            if(arr[i]>largest){

                secondlargest=largest;

                largest=arr[i];

            }
            else if(arr[i]>secondlargest && arr[i]!=largest){

                secondlargest=arr[i];
        
            }
           
        }
         return secondlargest;
    }
        
};

int main() {

    int arr[] = {10, 45, 3, 2, 7, 90};
    int n = 6;

    SecondLargest sol;

    int result = sol.Second_largest(arr, n);

    cout << " Second Largest element: " << result;

    return 0;
}