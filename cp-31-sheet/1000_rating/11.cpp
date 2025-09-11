#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
        int n, d; cin>>n>>d;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.rbegin(), v.rend());  // 100 90 80 70 60 50
        int ans = 0;
        for(int i=0; i<v.size(); i++) {
            int ele = v[i];
            int needed = (d/v[i]) + 1;
            if(v.size() - i < needed) break;
            ans++;
            int count = needed -1;
            while(count--) v.pop_back();
        }
        cout<<ans;
}