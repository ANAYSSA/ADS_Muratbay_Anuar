#include <iostream>
using namespace std;
int printnumber(int n){
    if(n==0){return 0;}
    cout << n << " ";
    return printnumber(n-1);
}
int main() {
    int a;
    cin >> a;
    printnumber(a);

    return 0;
}