#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

int primefact(int x) {
    int ans = 0;
    for(int i=2; i<=pow(x, 0.5); i++) {
        if(x != 1) {
            while(x%i == 0) {
                ans++;
                x = x/i;
            }
        }
    }
    if(x != 1) ans++;
    return ans;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int x; int k; cin>>x; cin>>k;
        int ans = primefact(x);
        if(ans >= k) {
            cout<<1<<endl;
        } else {
            cout<<0<<endl;
        }
    }
}