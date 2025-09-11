#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    int n; cin >> n;
    string s; cin>>s;
    vector<int>v = {s[s.length()-1] - 'a', s.length()}; // {largest_ele, index}
    vector<int>ans = {-1, -1};
    for(int i=s.length()-2; i>=0; i--) {
        if(s[i] - 'a' > v[0]) {
            ans = {i+1, v[1]};
            break;
        } else {
            v = {s[i] - 'a', i+1};
        }
    }
    if(ans[0] != -1) cout<<"YES"<<endl<<ans[0]<<" "<<ans[1];
    else cout<<"NO";
}