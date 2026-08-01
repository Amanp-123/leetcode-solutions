#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 3, 4, 5};
    int n = 4;

    int largest = arr[0];
    int sLargest = -1;

    for (int i = 1; i < n; i++) {

        if (arr[i] > largest) {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest) {
            sLargest = arr[i];
        }
    }

    cout << "Second Largest = " << sLargest;

    return 0;
}