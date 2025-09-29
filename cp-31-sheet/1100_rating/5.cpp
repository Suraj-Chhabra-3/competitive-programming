#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

vector<int> divisors(int n) {        // O(root_n)
    vector<int>ans;
    for(int i=1; i<=pow(n, 0.5); i++) {
        if(n%i == 0) {
            ans.push_back(i);
            if((n/i) != i) {
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}

int ansValue(vector<int>& v, int it) {
    vector<int>check;
    int i=0;
    while(i < v.size()) {
        int times = it;
        int sum = 0;
        while(times > 0) {
            sum = sum + v[i];
            i++;
            times--;
        }
        check.push_back(sum);
    }
    return abs( *max_element(all(check)) - *min_element(all(check)) );
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int ans = 0;
        vector<int>div = divisors(n);
        for(auto it : div) {
            int result = ansValue(v, it);
            ans = max(ans, result);
        }
        cout<<ans<<endl;
    }
}