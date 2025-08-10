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
    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            cout<<i<<endl;
        }
    }
}