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
        int ans = 0;
        unordered_map<char, bool>mpp;
        for(int i=0; i<n; i++) {
            if(mpp[s[i]] == false) {
                ans = ans + n-i;
                mpp[s[i]] = true;
            }
        }
        cout<<ans<<endl;
    }
}