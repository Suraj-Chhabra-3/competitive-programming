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
        int n, m; cin>>n>>m;
        vector<vector<int>>v(n, vector<int>(m));
        int sum = 0;
        int count = 0;
        int mini = INT_MAX;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>>v[i][j];
                sum += abs(v[i][j]);
                mini = min(mini, abs(v[i][j]));
                if(v[i][j] < 0) count++;
            }
        }
        if(count % 2 == 0) {
            cout<<sum<<endl;
        } else {
            cout<<sum-2*(mini)<<endl;
        }
    }
}