#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    int n; int m;
    cin>>n; cin>>m;
    vector<int>v(n, 0);
    for(int i=0; i<n; i++) cin>>v[i];
    int ans = 0;
    map<int, bool>mpp;
    for(auto it : v) mpp[it] = true;
    for(int i=-m; i<=m; i++) {
        if(mpp[i] == false) {
            ans = i;
            break;
        }
    }
    cout<<ans;
}