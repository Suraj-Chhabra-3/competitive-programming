#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

int check(string& s, string suff) {
    int ans = 0;
    int i = s.length()-1;
    int j = suff.length()-1;
    while(i >= 0 && j >= 0) {
        if(s[i] == suff[j]) {
            i--;
            j--;
        } else {
            ans++;
            i--;
        }
    }
    if(j != -1) return INT_MAX;
    else return ans;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        string s;
        cin>>s;
        int n = s.length();
        string suff = "";
        suff.push_back(s[n-2]);
        suff.push_back(s[n-1]);
        if(suff == "00" || suff == "25" || suff == "50" || suff == "75") {
            cout<<"0"<<endl;
        } else {
            int ans = INT_MAX;
            ans = min(ans, check(s, "00"));
            ans = min(ans, check(s, "25"));
            ans = min(ans, check(s, "50"));
            ans = min(ans, check(s, "75"));
            cout<<ans<<endl;
        }

    }
}