#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    string s;
    cin>>s;
    string ans;
    for(int i=0; i<s.length(); i++) {
        char ch = tolower(s[i]);
        if(!(ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i')) {
            ans.push_back('.');
            ans.push_back(ch);
        }
    }
    cout<<ans;
}