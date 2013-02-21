#include <iostream>
#include <string>
#define MAX 1010
using namespace std;

int S[MAX];

int main() {
    int n, k;
    while(cin >> n >> k) {
        for(int i=0; i<2*n+1; i++)
            cin >> S[i]; 

        for(int i=1; i<2*n+1 && k>0; i+=2) {
            if (S[i]-1 > S[i-1] && S[i]-1 > S[i+1]) {
                S[i]--;
                k--;
            }
        }
        
        cout << S[0];
        for(int i=1; i<2*n+1; i++) {
            cout << " " << S[i];
        }
        cout << endl;

       
    }
}
