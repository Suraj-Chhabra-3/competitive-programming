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
    vector<int>v(51);
    v[1] = 0;
    v[2] = 1;
    for(int i=3; i<51; i++) {
        v[i] = v[i-1] + v[i-2];
    }
    cout<<v[n];
}