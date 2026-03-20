#include <iostream>
using namespace std;
string poly(string s) {
       if (s.size() == 0 || s.size() == 1) return "Palindrome ";
    if (s[0] != s[s.size()-1]) return "Not palindrome ";
    if(s[0] == s[s.size()-1])
        return poly(s.substr(1, s.size() - 2));

}

int main () {

    string s;
    cin >> s;
    cout << poly(s);
return 0;

}