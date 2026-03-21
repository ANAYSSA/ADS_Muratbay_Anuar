#include <iostream>
using namespace std;
bool sorted(int arr[], int n) {
    if (n == 1 || n == 0) return true;
    if (arr[n - 1] < arr[n - 2])
        return false;
    return sorted(arr, n - 1);
}
int main() {
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    if (sorted(ar, n))
        cout << "Sorted";
    else
        cout << "Not sorted";
}