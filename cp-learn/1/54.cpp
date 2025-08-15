#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        int ans = 0;
        bool curr = true;
        int value = v[0];
        int check = 0;
        if(v[0] < 0) curr=false;
        while(check < n) {
            if( (v[check] < 0 && !curr) || (v[check] > 0 && curr) ) {
                value = max(value, v[check]);
            } else {
                ans = ans + value;
                value = v[check];
                curr = !curr;
            }
            check++;            
        }
        cout<<ans+value<<endl;
    }
}