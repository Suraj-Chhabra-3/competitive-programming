#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int tc; cin >> tc;
    int ans = 0;
    while (tc--) {
        int x; int y; cin>>x>>y;
        if(x >= y) {
            ans = (x-1) * (x-1);
            if(x%2 == 1) {
                ans = ans + y;
            } else {    
                ans = ans + x + (x-y);
            }
        } else {
            ans = (y-1) * (y-1);
            if(y%2 == 0) {
                ans = ans + x;
            } else {    
                ans = ans + y + (y-x);
            }
        }
        cout<<ans<<endl;
    }
}