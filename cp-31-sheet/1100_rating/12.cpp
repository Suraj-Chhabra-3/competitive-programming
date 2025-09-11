#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

int numberofgreater(int ele, vector<int>& a) {
    int l = 0; int e = a.size()-1;
    while(l <= e) {
        int m = (l+e) / 2;
        if(a[m] > ele) {
            l = m+1;
        } else {
            e = m-1;
        }
    }
    return l;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        sort(b.rbegin(), b.rend());
        sort(a.rbegin(), a.rend());
        int ans = 1;
        for(int i=0; i<n; i++) {
            int num = numberofgreater(b[i], a);
            ans = ( ( ans % MOD ) * ( (num - i) % MOD) ) % MOD;
        }
        cout<<ans<<endl;
    }
}
