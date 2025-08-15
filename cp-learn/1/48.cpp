#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int n; cin>>n;
    int ans;
    unordered_map<int, bool>mpp;
    for(int i=0; i<n-1; i++) {
        int x;
        cin>>x;
        mpp[x] = true;
    }
    for(int i=1; i<=n; i++) {
        if(mpp[i] == false) {
            ans = i;
            break;
        }
    }
    cout<<ans;
}