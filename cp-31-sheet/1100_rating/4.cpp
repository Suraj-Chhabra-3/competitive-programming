#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

bool same(int a, int b) {
    if(((a%2 == 0) && (b%2 == 0)) || ((a%2 == 1) && (b%2 == 1))) {
        return true;
    } else {
        return false;
    }
}

int kadane(vector<int>& vec) {
    int ans = LLONG_MIN;
    int lastsum = 0;
    for(int i=0; i<vec.size(); i++) {
        if(lastsum < 0) {
            lastsum = vec[i];
            ans = max(ans, lastsum);
        } else {
            lastsum = lastsum + vec[i];
            ans = max(ans, lastsum);
        }
    }
    return ans;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int ans = LLONG_MIN;
        vector<int>vec;
        for(int i=0; i<n; i++) {
            vec.push_back(v[i]);
            if((i+1 == n) || same(abs(v[i]), abs(v[i+1]))) {
                int sum = kadane(vec);
                ans = max(sum, ans);
                vec.clear();
            }
        }
        cout<<ans<<endl;
    }
}