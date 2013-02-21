#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while(cin >> s) {
        char mx = 0;
        for(int i=0; i<s.size(); i++) {
            mx = max(mx, s[i]);
        }
        
        for(int i=0; i<s.size(); i++) {
            if (s[i] == mx)
                cout << s[i];
        }
        cout << endl;
    }
}
