#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n, k; cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        int finalans = 0;
        int ans = 0;
        int i=0;
        int maxEleTillNow = 0;
        while(k>0 && i < n) {
            ans = ans + a[i];
            maxEleTillNow = max(maxEleTillNow, b[i]);
            k--;
            finalans = max(finalans, ans + k*(maxEleTillNow));
            i++;
        }
        cout<<finalans<<endl;
    }
}