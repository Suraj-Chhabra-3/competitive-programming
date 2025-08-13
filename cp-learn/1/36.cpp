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
    if(n%2 == 0) {
        cout<<(n + 1000)<<" "<<"1000";
    } else {
        cout<<(n + 1005)<<" "<<"1005";
    }
}