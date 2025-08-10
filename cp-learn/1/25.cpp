#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int n, m, a;
    cin>>n>>m>>a;
    int one = ceil(double(n) / double(a));
    int two = ceil(double(m)/double(a));
    cout<<one*two;
}