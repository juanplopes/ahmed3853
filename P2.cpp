#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    while(cin >> a >> b) {
        int pos=0;
        for(int i=0;i<b.size(); i++) {
            if (a[pos] == b[i])
                pos++;
        }
        cout << pos+1 << endl;
   }
}
