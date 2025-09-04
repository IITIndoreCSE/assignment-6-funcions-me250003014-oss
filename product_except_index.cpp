#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);

vector<long long> prefix(size, 1);
    vector<long long> suffix(size, 1);

    for (int i = 1; i < size; i++) {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    for (int i = size - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < size; i++) {
        output[i] = prefix[i] * suffix[i];
    }

    return output;    
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    vector<long long> res = productExceptIndex(arr);
    for(auto v : res)
        cout << v << " ";
    cout << "\n";

    return 0;
}

