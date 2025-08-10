#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int n;
    cin>>n;
    bool ans = false;
    for(int i=2; i<=pow(n, 0.5); i++) {
        if(n%i == 0) {
            ans = true;
            break;
        }
    }
    if(ans == true || n == 1) cout<<"NO";
    else cout<<"YES";
}