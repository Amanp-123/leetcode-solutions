#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {
                cout << "Pair: " << arr[i] << " + " << arr[j] 
                     << " = " << target << endl;
            }

        }
    }

    return 0;
}


