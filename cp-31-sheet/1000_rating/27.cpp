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
        int ans = 0;
        while(1) {
            string s = to_string(n);
            int count = 0;
            for(auto it : s) {
                int ele = it - '0';
                if(ele == 0) {
                    count++;
                } else {
                    if(n%ele == 0) {
                        count++;
                    }
                }
            }
            if(count == s.length()) {
                ans = stoll(s);
                break;
            }
            n = n+1;
        }
        cout<<ans<<endl;
    }
}