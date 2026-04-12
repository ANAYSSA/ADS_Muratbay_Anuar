#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& arr, int target, int L, int R) {
    if (L > R) return -1;
    int mid = L + (R - L) / 2;
    if (arr[mid] == target) return mid;
    return (arr[mid] > target) ? search(arr, target, L, mid - 1) : search(arr, target, mid + 1, R);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int res = search(arr, target, 0, arr.size() - 1);

    if (res != -1) cout << "Element found at index " << res << endl;
    else cout << "Element not found" << endl;

    return 0;
}
//Time complexity O(logn)
//Space complexityO(n)