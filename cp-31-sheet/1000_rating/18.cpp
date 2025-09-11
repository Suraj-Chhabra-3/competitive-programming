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
        int w, h; cin>>w>>h;

        // horizontal sides 
        int h1points; cin>>h1points;
        vector<int>h1(h1points);
        for(int i=0; i<h1points; i++) cin>>h1[i];

        int h2points; cin>>h2points;
        vector<int>h2(h2points);
        for(int i=0; i<h2points; i++) cin>>h2[i];


        // vertical sides 
        int v1points; cin>>v1points;
        vector<int>v1(v1points);
        for(int i=0; i<v1points; i++) cin>>v1[i];

        int v2points; cin>>v2points;
        vector<int>v2(v2points);
        for(int i=0; i<v2points; i++) cin>>v2[i];

        int ans = INT_MIN;

        ans = max(ans, h*abs(h1[0] - h1.back()));        // area - 1/2 * base * height
        ans = max(ans, h*abs(h2[0] - h2.back()));
        ans = max(ans, w*abs(v1[0] - v1.back()));
        ans = max(ans, w*abs(v2[0] - v2.back()));

        cout<<ans<<endl;
    }
}