#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

void count(unordered_map<string, bool>& mpp, string s) {
    for(int i=0; i<s.length(); i++) {
        string ss = "";
        for(int j=i; j<s.length(); j++) {
            ss.push_back(s[j]);
            mpp[ss] = true;
        }
    }
}   

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        string a, b; cin>>a>>b;
        unordered_map<string, bool>mpp1;
        unordered_map<string, bool>mpp2;
        count(mpp1, a);
        count(mpp2, b);
        int len = 0;
        for(auto it : mpp1) {
            if(mpp2[it.first] == true) {
                if(it.first.length() > len) {
                    len = it.first.length();
                }
            }
        }
        int ans = 0;
        ans = ans + (a.length() - len) + (b.length() - len);
        cout<<ans<<endl;
    }
}