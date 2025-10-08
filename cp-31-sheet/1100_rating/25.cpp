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
        string s; cin>>s;
        unordered_map<char, int>mpp;
        int i= 0;
        while(i < s.length()) {
            if(mpp.find(s[i]) != mpp.end()) {
                break;
            } else {
                mpp[s[i]] = 1;
                i++;
            }
        }
        string ans = "YES";
        int k  = i;
        while(i < s.length()) {
            if(s[i] != s[i - k]) {
                ans = "NO";
            }
            i++;
        }
        cout<<ans<<endl;
    }
}