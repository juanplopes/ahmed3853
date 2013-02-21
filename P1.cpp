#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int tot=0, codd=0, minodd=1<<30;
        for(int i=0; i<n; i++) {
            int a; cin >> a;
            tot += a;
            if (a%2) {
                codd++;
                minodd = min(minodd, a);
            }
        }
        
        if (codd == 0) {
            cout << "0" << endl;
        } else if (codd%2) {
            cout << tot << endl;
        } else {
            cout << tot-minodd << endl;
        }
    }
}
