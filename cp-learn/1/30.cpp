#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int n, m;
    cin>>n>>m;
    int ans = 0;
    for(int a=0; a<=m; a++) {
        int b1 = n - (a*a);
        double b2 = sqrt(m-a);
        if(ceil(b2) == floor(b2)) {
            if(b1 == (int)b2) ans++;
        }
    }
    cout<<ans;
}