#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Write your code here
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    if (arr[0] == arr[n-1]) {
        cout << -1 << endl;
        return;
    }

    int it = 0;
    while (it < n && arr[it] == arr[0]) {
        it++;
    }
    cout << it << " " << (n - it) << endl;

    for (int i = 0 ; i < it ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = it ; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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