#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n;
        cin>>n;
        vector<int>v(n);
        int ans = 0;
        unordered_map<int, int>mpp;
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        if((v[0] != v[1]) && (v[1] == v[2])) {
            cout<<1<<endl;
        } else if((v[n-1] != v[n-2]) && (v[n-2] == v[n-3])) {
            cout<<n<<endl;
        } else {
            int i = 1;
            while(i < n-1) {
                if((v[i] != v[i-1]) && (v[i] != v[i+1])) {
                    cout<<i+1<<endl;
                    break;
                }
                i++;
            }
        }
    }
}