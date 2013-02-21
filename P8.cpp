#include <iostream>
#define PP 100
using namespace std;

bool P[PP];
int NP[PP];

int main() {
    for(int i=2; i*i<PP; i++) {
        if (P[i]) continue;
        for(int j=i*i; j<PP; j+=i)
            P[j] = true;
    }

    int last = -1;
    for(int i=PP-1; i>=0; i--) {
        NP[i] = last;
        if (not P[i]) last = i;
    }

    int n, m;
    while(cin >> n >> m)
        cout << (NP[n] == m ? "YES" : "NO") << endl;
}
