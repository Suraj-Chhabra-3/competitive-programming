#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    string s;
    cin>>s;
    vector<int>v(123, 0);
    for(int i=0; i<s.length(); i++) {
        v[(int)(s[i])]++;
    }
    for(int i=0; i<123; i++) {
        if(v[i] != 0) {
            cout<<char(i)<<" "<<v[i]<<endl;
        }
    }
}