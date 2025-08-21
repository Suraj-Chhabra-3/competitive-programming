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
        int n; int k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        if(k == 4) {

            int numberofdivisblebytwo = 0;
            for(auto it : v) {
                if(it%2 == 0) numberofdivisblebytwo++;
            }
            int numberofdivisblebyfour = 0;
            for(auto it : v) {
                if(it%4 == 0) numberofdivisblebyfour++;
            }

            if(numberofdivisblebyfour >= 1 || numberofdivisblebytwo >= 2) {
                cout<<0<<endl;
            } else {
                if(numberofdivisblebytwo == 1) {
                    cout<<1<<endl;
                } else {
                    bool present = false;
                    for(auto it : v) {
                        if(it%4 == 3) present = true;
                    }
                    if(present) {
                        cout<<1<<endl;
                    } else {
                        cout<<2<<endl;
                    }
                }
            }

        } else {
            int ans = INT_MAX;
            for(auto it : v) {
                if(it%k == 0) {
                    ans = 0;
                }
                int mod = it%k;
                int times = k - mod;
                ans = min(ans, times);
            }
            cout<<ans<<endl;
        }
        
    }
}