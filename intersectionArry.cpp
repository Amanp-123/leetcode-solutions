#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr{1, 2, 3, 4, 5, 2};
    vector<int> barr{2, 3, 49, 10};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];

        for (int j = 0; j < barr.size(); j++) {
            if (element == barr[j]) {
                ans.push_back(element);
            }
        }
    }

    for (auto value : ans) {
        cout << value << " ";
    }

    return 0;
}