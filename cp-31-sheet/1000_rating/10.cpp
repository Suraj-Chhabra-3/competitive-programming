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
        char ch; cin>>ch;
        string s; cin>>s;
        int index = -1;
        for(int i=0; i<n; i++) {
            if(s[i] == 'g') {
                index = i;
                break;
            }
        }
        vector<int>dis;
        for(int i=n-1; i>=0; i--) {
            if(s[i] == 'g') index = i;
            if(index < i) {
                dis.push_back(index + n - i); 
            } else {
                dis.push_back(index - i);
            }
        }
        reverse(dis.begin(), dis.end());
        int ans = INT_MIN;
        for(int i=0; i<n; i++) {
            if(s[i] == ch) {
                ans = max(ans, dis[i]);
            }
        }
        cout<<ans<<endl;
    }
}