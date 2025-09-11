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
        string s; cin>>s;
        int ans = LLONG_MAX;

        vector<int>whites;
        int currwhites = 0;
        for(auto it : s) {
            if(it == 'W') currwhites++;
            whites.push_back(currwhites);
        }

        vector<int>whitesinkterms(n, LLONG_MAX);
        for(int i=0; i<n; i++) {
            if(i + k - 1 >= n) {
                break;
            } 
            if(i == 0) {
                whitesinkterms[i] = whites[i + k - 1] - 0;
            } else {
                whitesinkterms[i] = whites[i + k - 1] - whites[i-1];
            }
        }
        
        for(int i=0; i<n; i++) {
            int times = whitesinkterms[i];
            ans = min(ans, times);
        }
        cout<<ans<<endl;
    }
}