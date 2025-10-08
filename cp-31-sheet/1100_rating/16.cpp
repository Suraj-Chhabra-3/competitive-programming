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
        vector<int>c(n);
        for(int i=0; i<n; i++) cin>>c[i];
        int currMaxSum = 1;
        sort(all(c));
        string ans = "YES";
        if(c[0] != 1) {
            ans = "NO";
        } else {
            for(int i=1; i<n; i++) {
                int it = c[i];
                if(it > currMaxSum) {
                    ans = "NO";
                    break;
                } else {
                    currMaxSum = currMaxSum + it;
                }
            }
        }
        cout<<ans<<endl;
    }
}