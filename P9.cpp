#include <iostream>
#include <string>
#include <cstring>
#define MAX 200
using namespace std;

string T[MAX];
int n, m;
bool V[256];

void dfs(int x, int y) {
    if (x<0 || x>=n || y<0 || y>=m || T[x][y] == '.')
        return;

    V[T[x][y]]=true;   
    T[x][y] = '.'; 
    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
}

int main() {
    char pres;
    while(cin >> n >> m >> pres) {
        for(int i=0; i<n; i++) {
            cin >> T[i];
        }
        
        memset(V, 0, sizeof(V));
        
        int result = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if (T[i][j] == pres) {
                    dfs(i,j);
                    for(int k=0; k<256; k++)
                        if (k!=pres && V[k]) result++;
                }
            }

        }
        cout << result << endl;
    }
}
