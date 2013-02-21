#include <iostream>
#include <string>
#define MAX 100010
using namespace std;

int S[MAX];

int main() {
    int n;
    while(cin >> n) {
        int total = 0;
        for(int i=0; i<n; i++) {
            cin >> S[i];
            S[i] *= 2;
            total += S[i];
        }
        int target = total/2;
        
        int alice = 0, accum = 0;

        for(int i=0; i<n; i++) {
            if (target >= S[i]) {
                alice++;
                target -= S[i];
            } else {
                if (target >= S[i]/2)
                    alice++;
                break;
            }
        }        
        
        cout << alice << " " << n-alice << endl;
    }
}
