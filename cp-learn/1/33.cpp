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
        int x, y, n;
        cin>>x>>y>>n;
        int present = n%x;
        if(present == y) cout<<n<<endl;
        else if(y < present) cout<<n-(present-y)<<endl;
        else cout<<n - (present + x - y)<<endl;
    }
}