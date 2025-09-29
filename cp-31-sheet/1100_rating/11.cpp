#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n, k; cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(all(v));

        vector<int>presum;
        int pre = 0;
        for(auto it : v) {
            pre = pre + it;
            presum.push_back(pre);
        }

        vector<int>postsum;
        int post = 0;
        for(int i=n-1; i>=0; i--) {
            post = post + v[i];
            postsum.push_back(post);
        }
        reverse(all(postsum));

        int ans = LLONG_MAX;
        for(int i=0; i<=k; i++) {
            int index1 = i*2 - 1;
            int leftsteps = k-i;
            int index2 = n-leftsteps;
            int value = 0;
            if(index1 >= 0 && index1 < n) {
                value += presum[index1];
            }
            if(index2 >= 0 && index2 < n) {
                value += postsum[index2];
            }
            ans = min(ans, value);
        }

        int totalsum = 0;
        for(auto it : v) totalsum = totalsum + it;
        cout<<totalsum - ans<<endl;
    }
}