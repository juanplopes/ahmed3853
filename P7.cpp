#include <iostream>
using namespace std;

int main() {
    int n, k;
    while(cin >> n >> k) {
        if (n/k<3) {
            cout << -1 << endl;
        } else {
            int nn=0, loop=0;
            
            while(nn < n) {            
                for(int i=0; i<k && nn<n; i++) {
                    if (nn) cout << " ";
                    cout << (i+loop%2)%k+1;
                    nn++;
                }
                loop++;
            }
            cout << endl;
        }
       
    }
}
