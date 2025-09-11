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
        string s; cin>>s;
        unordered_map<char, int>mpp1;
        unordered_map<char, int>mpp2;
        mpp1[s[0]] = 1;
        for(int i=1; i<s.length(); i++) {
            mpp2[s[i]]++;
        }
        int ans = mpp1.size() + mpp2.size();
        for(int i=1; i<n; i++) {
            mpp1[s[i]]++;
            mpp2[s[i]]--;
            if(mpp2[s[i]] == 0) mpp2.erase(s[i]);
            ans = max(ans, (int)(mpp1.size() + mpp2.size()));
        }
        cout<<ans<<endl;
    }
}