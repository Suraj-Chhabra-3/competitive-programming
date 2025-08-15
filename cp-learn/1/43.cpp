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
    string result;
    for(int i=0; i<s.length(); i++) {
        if(s[i] != '+') ans.push_back(s[i]);
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.length(); i++) {
        result.push_back(ans[i]);
        result.push_back('+');
    }
    result.pop_back();
    cout<<result;
}