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
        int a; int b; cin>>a; cin>>b;
        if(b==1) {
            cout<<"NO"<<endl;
        } else {
            int k1 = 1;
            int k2 = 1;
            int k3 = b*k1 + k2;
            int num1 = a*b*k1;
            int num2 = a*k2;
            int num3 = a*k3;
            cout<<"YES"<<endl;
            cout<<num1<<" "<<num2<<" "<<num3<<endl; 
        }
    }
}