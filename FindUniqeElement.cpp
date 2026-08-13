
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> s;

    for(int i = 0; i < n; i++) {

        if(s.find(arr[i]) != s.end()) {
            s.erase(arr[i]);
        }
        else {
            s.insert(arr[i]);
        }
    }

    cout << "Unique Element: " << *s.begin();

    return 0;
}

