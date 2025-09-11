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
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        vector<int>interval;
        int ans = 0;
        interval = {a[0] - x, a[0] + x};
        int i=1; 
        while(i < n) {
            int left = a[i] - x;
            int right = a[i] + x;
            int newleft = max(left, interval[0]);
            int newright = min(right, interval[1]);
            if(newright < newleft) {
                ans++;
                interval = {left, right};
            } else {
                interval = {newleft, newright};
            }
            i++;
        }
        cout<<ans<<endl;
    }
}