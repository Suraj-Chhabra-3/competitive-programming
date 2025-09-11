#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    int n;
    cin>>n;
    vector<int>v(n, 0);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    for(auto it : v) cout<<it<<" ";
}