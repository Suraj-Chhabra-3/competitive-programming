#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(abs(pow(a, b) - pow(c, d) <= 1e-9)) {
        cout<<"NO";
    } else {
        cout<<"YES";
    }
}