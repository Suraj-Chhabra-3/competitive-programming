#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

bool solve(int w, vector<int>& v, int c) {
    int sum = 0;
    for(auto it : v) {
        if(c - sum < (it + 2*w) * (it + 2*w)) { // cause overflow
            return false;
        }
        sum += (it + 2*w) * (it + 2*w);
    }
    return true;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n, c; cin>>n>>c;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int l = 1; int e = sqrt(c/(4*n)); // important part - to overcome overflow
        int ans = 0;
        while(l<=e) {
            int mid = (l + ((e-l) / 2));
            if(solve(mid, v, c)) {
                ans = mid;
                l = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        cout<<ans<<endl;
    }
}