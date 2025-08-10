#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n, 0);
        int ones = 0;
        int zeros = 0;
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if(v[i] == 1) {
                ones++;
            }
            if(v[i] == 0) {
                zeros++;
            }
        }
        if(ones == 0) {
            cout<<0<<endl;
        } else {
            int ans = (pow(2, zeros)) * ones;
            cout<<ans<<endl;
        }
    }
}