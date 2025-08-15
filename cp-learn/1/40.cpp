#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        string s;
        cin>>s;
        string ans = "YES";
        bool alternate1s = false;
        for(int i=0; i<s.length()-1; i++) {
            if(s[i] == s[i+1] && s[i] == '0') {
                if(alternate1s) {
                    ans = "NO";
                    break;
                }
            } else if(s[i] == s[i+1] && s[i] == '1') {
                alternate1s = true;
            }
        }
        cout<<ans<<endl;
    }
}