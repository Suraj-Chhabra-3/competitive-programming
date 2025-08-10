#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    unordered_map<int, int>mpp;
    bool ans = true;
    for(int i=0; i<5; i++) {
        int x;
        cin>>x;
        mpp[x]++;
        if(mpp[x] > 3 || mpp.size() > 2) ans = false;
    }
    if(ans) cout<<"Yes";
    else cout<<"No";
}