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
        string s; cin>>s;
        int open = 0;
        int ans = 0;
        for(auto it : s) {
            if(it == '(') {
                open++;
            } else {
                if(open > 0) {
                    open--;
                } else {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}