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
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        map<int, int>mpp;
        int ans = 0;
        for(int i=0; i<n; i++) {
            int curr = v[i] - i;
            ans = ans + (mpp[curr]);
            mpp[curr]++;
        }
        cout<<ans<<endl;
    }
}