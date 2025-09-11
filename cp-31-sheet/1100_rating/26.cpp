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
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        if(n == 1) {
            cout<<0<<endl;
        } else {
            int i = 0;
            int j = n-1;
            int leftsum = v[0];
            int rightsum = v.back();
            int ans = 0;
            while(j-i > 1) {
                if(leftsum == rightsum) {
                    ans = max(ans, (i+1 + n-j));
                }
                if(leftsum <= rightsum) {
                    i++;
                    leftsum += v[i];
                } else {
                    j--;
                    rightsum += v[j];
                }
            }
            if(leftsum == rightsum) ans = max(ans, (i+1 + n-j));
            cout<<ans<<endl;
        }
    }
}