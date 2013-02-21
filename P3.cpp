#include <iostream>
#include <string>
using namespace std;

int common(string& a, string& b) {
    for(int i=0;i<a.size();i++)
        if (a[i] != b[i]) return i;
    return a.size();
}

int main() {
    int n;
    while(cin >> n) {
        string a, b;
        cin >> a;
        int result = a.size();
        for(int i=1; i<n; i++) {
            cin >> b;
            result = min(result, common(a, b));
        }
        cout << result << endl;
   }
}
