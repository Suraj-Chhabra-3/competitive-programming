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
        int n; cin>>n;
        vector<int>v(n);

        int sumofarray = 0;
        int smallestinarray = INT_MAX;

        for(int i=0; i<n; i++) {
            cin>>v[i];
            sumofarray += abs(v[i]);
            smallestinarray = min(smallestinarray, abs(v[i]));
        }

        int negcount = 0;
        for(auto it : v) {
            if(it < 0) negcount++;
        }

        if(negcount%2 == 0) {
            cout<<sumofarray<<endl;
        } else {
            cout<<sumofarray - 2*smallestinarray<<endl;
        }
    }
}