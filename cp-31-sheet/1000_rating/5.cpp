#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

bool cmp(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0]) 
        return a[1] < b[1];   // smaller second value
    return a[0] > b[0];       // larger first value
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n, k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        for(int i=0; i<n; i++) {
            v[i] = v[i]%k;
            if(v[i] == 0) v[i] = k;
        }
        vector<int>ans;
        vector<vector<int>>num;
        for(int i=0; i<n; i++) {
            num.push_back({v[i], i});
        }
        sort(all(num), cmp);
        for(auto it : num) {
            ans.push_back(it[1] + 1);
        }
        for(auto it : ans) cout<<it<<" ";
        cout<<endl;
    }
}