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
        vector<int>v;
        for(int i=0; i<4; i++) {
            int s; cin>>s;
            v.push_back(s);
        }
        int final1 = max(v[0], v[1]);
        int final2 = max(v[2], v[3]);
        sort(all(v));
        if(v[2] == min(final1, final2) && v[3] == max(final1, final2)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}