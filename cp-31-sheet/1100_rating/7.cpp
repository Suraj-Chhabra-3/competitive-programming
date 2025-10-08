#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

bool possible(int h, int x, vector<int>& v) {
    int totalWater = 0;
    for(auto it : v) {
        if(it < h) totalWater += (abs(it-h));
    }
    return totalWater <= x;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n, x; 
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int l = 1; int e = INT_MAX;
        int ans = 0;
        while(l <= e) {
            int mid = l + ((e - l) / 2);
            // int mid = (l+e) / 2;
            if(possible(mid, x, v)) {
                ans = mid; 
                l = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        cout<<ans<<endl;
    }
}