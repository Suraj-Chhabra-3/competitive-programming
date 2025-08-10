#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    int n;
    int m;
    cin>>n>>m;
    int ans = n%10 + m%10;
    cout<<ans;
}