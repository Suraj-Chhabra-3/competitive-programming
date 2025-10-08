#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

int solve(int i, int j, vector<string>& v, vector<vector<int>>& vis) {
    int zero = 0;
    int one = 0;

    while(vis[i][j] == 0) {

        if(v[i][j] == '1') one++;
        else zero++;

        vis[i][j] = 1;
        int row = i;
        int col = j;
        i = col;
        j = (v.size() - 1) - row;
    }

    return min(one, zero); 
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;

        vector<string>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        vector<vector<int>>vis(n, vector<int>(n, 0));
        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(vis[i][j] == 0) {
                    ans = ans + solve(i, j, v, vis);
                }
            }
        }
        cout<<ans<<endl;
    }
}