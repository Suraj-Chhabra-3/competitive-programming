#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int n; cin>>n;
    vector<int>v(n, 0);
    int ans = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    for(int i=1; i<n; i++) {
        if(v[i] < v[i-1]) {
            ans = ans + abs(v[i] - v[i-1]);
            v[i] = v[i-1];
        }
    }
    cout<<ans;
}