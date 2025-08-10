#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int k, s;
    cin>>k>>s;
    int ans = 0;
    for(int i=0; i<=k; i++) {
        if(i > s) break;
        for(int j=0; j<=k; j++) {
            if(i + j > s) break;
            if(s - (i + j) <= k) ans++;
        }
    }
    cout<<ans;
}