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
        int n, k; cin>>n>>k;
        vector<vector<int>>grid(n, vector<int>(n, 0));
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin>>grid[i][j];
            }
        }

        int needed = 0;

        for(int i=0; i<=((n-1) / 2); i++) {
            for(int j=0; j<n; j++) {
                int oneValue = grid[i][j];
                int row = (n-1) - i;
                int col = (n-1) - j;
                int twoValue = grid[row][col];
                if(oneValue != twoValue) {
                    grid[i][j] = 1;
                    grid[row][col] = 1;
                    needed++;
                }
            }
        }
        if(needed > k) {
            cout<<"NO"<<endl;
        } else {
            int rem = k - needed;
            if((rem%2 == 0) || ( (n%2 == 1) && (rem%2 == 1) )) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
}