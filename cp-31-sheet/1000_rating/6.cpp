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
        int n, k, q;
        cin>>n>>k>>q;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        vector<int>vec;
        int cont = 0;
        for(int i=0; i<n; i++) {
            if(v[i] <= q) {
                cont++;
            } else {
                if(cont >= k) {
                    vec.push_back(cont);
                }
                cont = 0;
            }
        }
        if(cont >= k) vec.push_back(cont);
        int ans = 0;
        for(int i=0; i<vec.size(); i++) {
            ans = ans + (((vec[i] - k + 1) * (vec[i] - k + 2)) / 2);
        }
        cout<<ans<<endl;
    }
}