#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<vector<int>>arrays;
        while(n--) {
            int m; cin>>m;
            vector<int>v(m);
            for(int i=0; i<m; i++) cin>>v[i];
            sort(all(v));
            arrays.push_back(v);
        }
        int minvalue = INT_MAX;
        int sum = 0;
        for(int i=0; i<arrays.size(); i++) {
            if(arrays[i][0] < minvalue) {  
                minvalue = arrays[i][0];
            }
            sum = sum + arrays[i][1];
        }

        int ans = 0;
        for(int i=0; i<arrays.size(); i++) {
            ans = max(ans, sum - arrays[i][1] + minvalue);
        }

        cout<<ans<<endl;

    }
}