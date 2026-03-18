#include <iostream>
using namespace std;
void printnumber(int n){
    if(n!=0){cout << n << " ";
        printnumber(n-1);}

}
int main() {
    int a;
    cin >> a;
    printnumber(a);

    return 0;
}