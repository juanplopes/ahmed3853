#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    while(cin >> n >> m) {
        if (m>0 and n==0) {
            cout << "Impossible" << endl;
        } else {
            cout << n + max(m-n, 0) << " " << n+max(m-1, 0) << endl;
        }
    }
}
