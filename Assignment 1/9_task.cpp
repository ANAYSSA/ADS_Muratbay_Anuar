#include <iostream>
using namespace std;
int findF(int a) {
if (a == 0) return 0;
    if (a == 1) return 1;
    return findF(a-1) + findF(a-2);

}
int main() {
    int a;
    cin >> a;
    cout << findF(a);
}