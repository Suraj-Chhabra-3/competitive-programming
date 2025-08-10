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
        int n;
        cin>>n;
        vector<int>v(n);
        int even = 0;
        int odd = 0;
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if(v[i]%2 == 0) even++;
            else odd++;
        }
        if(((even + odd) % 2) != 0) cout<<-1<<endl;
        else cout<<(abs(even-odd) / 2)<<endl;
    }
}