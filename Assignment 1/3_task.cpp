#include <iostream>
using namespace std;
int plusnumber(int n) {
    if (n == 0)
        return 0;
    return n + plusnumber(n - 1);
}
int main() {
    int a;
    cin >> a;
    cout << plusnumber(a);
    return 0;
}