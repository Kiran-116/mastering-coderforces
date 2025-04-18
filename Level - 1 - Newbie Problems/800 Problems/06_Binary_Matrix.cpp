#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Write your code here
    int n, m;
    cin >> n >> m;

    vector<vector<int> > mat(n, vector<int>(m));
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> mat[i][j];
        }
    }

    int r = 0, c = 0;
    for (int i = 0 ; i < n ; i++) {
        int XOR = 0;
        for (int j = 0 ; j < m ; j++) {
            XOR ^= mat[i][j];
        }
        // r += XOR;
        if (XOR == 1) {
            r++;
        }
    }

    for (int j = 0 ; j < m ; j++) {
        int XOR = 0;
        for (int i = 0 ; i < n ; i++) {
            XOR ^= mat[i][j];
        }
        // c += XOR;
        if (XOR == 1) {
            c++;
        }
    }

    cout << max(r, c) << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}