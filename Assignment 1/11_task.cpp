#include <iostream>
using namespace std;

int arrsum(int arr[], int n) {
    if (n == 0)
        return 0;

    return arr[n - 1] + arrsum(arr, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << arrsum(arr, n);
    return 0;
}