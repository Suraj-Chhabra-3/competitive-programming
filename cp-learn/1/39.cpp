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
        int hc; int ac;
        int hm; int am;
        int k; int a; int h;
        cin>>hc>>ac;
        cin>>hm>>am;
        cin>>k>>a>>h;
        string ans = "NO";
        for(int i=0; i<=k; i++) {
            if(ceil(double(hc + i*h) / double(am)) >= ceil(double(hm) / double(ac + (k-i) * a))) {
                ans = "YES";
                break;
            }
        }
        cout<<ans<<endl;
    }
}