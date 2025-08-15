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
        if(s.length() > 10) {
            int count = s.length()-2;
            string ans;
            ans.push_back(s[0]);
            ans.append(to_string(count));
            ans.push_back(s[s.length()-1]);
            cout<<ans<<endl;
        } else {
            cout<<s<<endl;
        }
    }
}