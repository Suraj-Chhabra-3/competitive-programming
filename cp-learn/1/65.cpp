#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

int fun(string& s) {
    for(int i=0; i<s.length(); i++) {
        if( (s[i] - '0') % 8 == 0 ) return (s[i]-'0');
        for(int j=i+1; j<s.length(); j++) {
            if( (10*(s[i] - '0') + (s[j] - '0')) % 8 == 0 ) return (10*(s[i] - '0') + (s[j] - '0'));
            for(int k=j+1; k<s.length(); k++) {
                if( ((s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0') ) % 8 == 0 ) return ((s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0') );
            }
        }
    }
    return -1;
}

signed main() {
    fastio();
    string s;
    cin>>s;
    int ans = fun(s);
    if(ans == -1) cout<<"NO";
    else cout<<"YES"<<endl<<ans;
}