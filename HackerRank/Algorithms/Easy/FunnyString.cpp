#include <iostream>
#include <string>
using namespace std;

string rev(string s) {
    string r;
    for(int i = 0; i < s.length(); i ++)
        r = string("") + s[i] + r;
    return r;
}

bool funny() {
    string s;
    cin >> s;
    string r = rev(s);
    for(int i = 1; i < s.length(); i ++)
        if(abs(s[i] - s[i - 1]) != abs(r[i] - r[i - 1])) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t --) {
        if(funny()) cout << "Funny" << endl;
        else cout << "Not Funny" << endl;
    }
    return 0;
}
