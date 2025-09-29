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
        int value = pow(n, 0.5);
        int i=2;
        int ans1 = 1;
        while(i <= value) {
            if(n%i == 0) {
                ans1 = n/i;
                break;
            }
            i++;
        }
        cout<<ans1<<" "<<n-ans1<<endl;
    }
}