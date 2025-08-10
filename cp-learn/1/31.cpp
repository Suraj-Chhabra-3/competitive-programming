#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int n;
    cin>>n;
    string s = to_string(n);
    int i=0;
    bool ans = true;
    while(i < s.length()) {
        if(i <= s.length()-3) {
            if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4') {
                i = i+3;
            } else if(s[i] == '1' && s[i+1] == '4') {
                i = i+2;
            } else if(s[i] == '1') {
                i++;
            } else {
                ans = false;
                break;
            }
        } else if(i <= s.length()-2) {
            if(s[i] == '1' && s[i+1] == '4') {
                i = i+2;
            } else if(s[i] == '1') {
                i++;
            } else {
                ans = false;
                break;
            }
        } else {
            if(s[i] == '1') {
                i++;
            } else {
                ans = false;
                break;
            }
        }
    }
    if(ans == false) cout<<"NO";
    else cout<<"YES";
}