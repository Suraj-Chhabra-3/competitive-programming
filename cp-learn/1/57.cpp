#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

vector<int> divisors(int n) {
    vector<int>ans;
    for(int i=2; i<=pow(n, 0.5); i++) {
        if(n%i == 0) {
            ans.push_back(i);
            if(n/i != i) {
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}

bool compare(vector<int>& v, vector<int>& vv) {
    sort(all(v));
    sort(all(vv));
    if(vv.size() != v.size()) return false;
    for(int i=0; i<v.size(); i++) {
        if(v[i] != vv[i]) return false;
    }
    return true;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        int x = *max_element(v.begin(), v.end()) * (*min_element(v.begin(), v.end()));
        vector<int>vv = divisors(x);
        if(compare(v, vv)) cout<<x<<endl;
        else cout<<"-1"<<endl;
    }
}