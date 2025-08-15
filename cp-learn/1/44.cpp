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
    char ss = s[0];
    ss = toupper(ss);
    s[0] = ss;
    cout<<s;
}