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
        int a, b; cin>>a>>b;
        int x = 0;
        int ans = a;
        int n = a-1;
        if(n%4 == 0) {  // formula for xor of first n digits 
            x = n;
        } else if(n%4 == 1) {
            x = 1;
        } else if(n%4 == 2) {
            x = n+1;
        } else {
            x = 0;
        }
        int y = x^b;
        if(x == b) {
            cout<<ans<<endl;
        } else if(y == a) {
            cout<<ans + 2<<endl;
        } else {
            cout<<ans + 1<<endl;
        }
    }
}