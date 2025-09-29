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
        int gcd1 = v[0];
        int gcd2 = v[1];

        for(int i=2; i<n; i=i+2) {
            gcd1 = __gcd(gcd1, v[i]);
        }
        for(int i=3; i<n; i=i+2) {
            gcd2 = __gcd(gcd2, v[i]);
        }

        int ans1 = gcd1;
        for(int i=1; i<n; i=i+2) {
            if(v[i] % gcd1 == 0) {
                ans1 = 0; 
                break;
            }
        }

        int ans2 = gcd2;
        for(int i=0; i<n; i=i+2) {
            if(v[i] % gcd2 == 0) {
                ans2 = 0; 
                break;
            }
        }

        if(ans1 != 0) cout<<ans1<<endl;
        else if(ans2 != 0) cout<<ans2<<endl;
        else cout<<0<<endl;

    }
}