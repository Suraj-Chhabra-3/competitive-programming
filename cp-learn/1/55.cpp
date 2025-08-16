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
        int n; int k;
        cin>>n; cin>>k;
        if(k*k > n) {
            cout<<"NO"<<endl;
        } else if((k%2 == 1) && (n % 2 == 1)) {
            cout<<"YES"<<endl;
        } else if((k%2 == 0) && (n % 2 == 0)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}