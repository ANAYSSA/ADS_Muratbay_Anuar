#include <iostream>
using namespace std;
int sum(int a) {
   if (a == 0) return 0;
   int c = 0;
   c = c + a%10;
   return c + sum(a/10);
}

int main() {
   int a;
   cin >> a;

cout << sum(a);

}