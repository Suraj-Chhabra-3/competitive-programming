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
        int n, c; cin>>n>>c;
        vector<int>v(n, 1);
        for(int i=0; i<n; i++) cin>>v[i];
        vector<int>vec;
        for(int i=0; i<n; i++) {
            vec.push_back(i + 1 + v[i]);
        }
        sort(all(vec));
        int ans = 0;
        int i = 0;
        while(i < vec.size() && c >= vec[i]) {
            ans++;
            c = c - vec[i];
            i++;
        }
        cout<<ans<<endl;
    }
}