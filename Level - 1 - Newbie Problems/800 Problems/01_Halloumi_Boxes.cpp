#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 1 ; i < n ; i++) {
        if (arr[i] >= arr[i-1]) {
            count++;
        }
    }
    if (n == 1  || (count + 1 == n) || k > 1) {
        cout << "YES" << endl;
        return;
    }
    else {
        cout << "NO" << endl;
    }
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