#include <iostream>
using namespace std;
int rev(int a) {
    if (a == 0) return 0;
    int c = a%10;
    cout << c;
    return rev(a/10);
}

int main() {
    int a;
    cin >> a;
    rev(a);

}