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
        string s; string t;
        cin>>s>>t;
        map<char, vector<int>>mpps;
        map<char, int>mppt;
        for(int i=s.length()-1; i>=0; i--) {
            mpps[s[i]].push_back(i);
        }
        for(auto it : t) {
            mppt[it]++;
        }
        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            while(mpps[ch].size() > mppt[ch]) {
                s[mpps[ch].back()] = '.';
                mpps[ch].pop_back();
            }
        }
        string ans = "";
        for(auto it : s) {
            if(it != '.') ans.push_back(it);
        }
        if(ans == t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}