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
        int x, y, k; cin>>x>>y>>k;
        int ans = k;
        int newSticksNeeded = k*y + k-1;
        if(newSticksNeeded % (x-1) == 0) {
            ans = ans + (newSticksNeeded / (x-1));
        } else {
            ans = ans + (newSticksNeeded / (x-1)) + 1;
        }
        cout<<ans<<endl;
    }
}