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
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        int ans = 0;
        int lastGreater = v[n-1];
        int i=n-2;
        while(i>=0) {
            if(lastGreater == 0) {
                ans = -1;
                break;
            } else if(lastGreater > v[i]) {
                lastGreater = v[i];
                i--;
            } else {
                int extra = (int)(log2(v[i] / lastGreater) + 1);
                ans = ans + extra;
                v[i] = v[i] / (pow(2, extra));
                lastGreater = v[i];
                i--;
            }
        }
        cout<<ans<<endl;
    }
}