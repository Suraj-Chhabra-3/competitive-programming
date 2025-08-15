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
        int n; cin>>n;
        int p = 0;
        while(n%2 == 0) {
            n = n/2;
            p++;
        }
        int b = 0;
        while(n%3 == 0) {
            n=n/3;
            b++;
        }
        if(n != 1) {
            cout<<-1<<endl;
        } else if(p > b) {
            cout<<-1<<endl;
        } else {
            cout<<2*b - p<<endl;
        }
    }
}