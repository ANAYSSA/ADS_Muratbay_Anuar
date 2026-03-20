#include <iostream>
using namespace std;
int bigarr(int arr[], int n) {
    if (n == 0)
        return 0;
    if (arr[n-1] > arr[n-2])
        return arr[n-1];
    return bigarr(arr, n-1);
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << bigarr(arr, n);
    return 0;
}