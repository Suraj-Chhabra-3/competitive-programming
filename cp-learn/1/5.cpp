#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    int t;
    cin>>t;
    while(t--) {
        int l;
        int r;
        cin>>l>>r;
        if(l>r) swap(l, r);
        int ans = (r*(r+1) / 2) - (l*(l+1) / 2) + l;
        cout<<ans<<endl;
    }
}