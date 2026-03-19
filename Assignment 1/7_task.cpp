#include <iostream>
using namespace std;
int countd(int a) {
    if (a == 0) return 0;
    return 1 + countd(a/10);
}

int main() {
    int a;
    cin >> a;
    cout << countd(a);

}