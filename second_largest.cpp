#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN;
    for(int num : arr) {
        if(num > first) {
            second = first;
            first = num;
        } else if(num > second && num != first) {
            second = num;
        }
    }
    if (second == INT_MIN) {
    cout << "No second largest element\n";
    return INT_MIN;
    }
    return second;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}
