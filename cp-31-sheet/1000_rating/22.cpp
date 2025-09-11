#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

int steps(int a, int x) {
    int ans = 0;
    while(a != 0) {
        a = a/x;
        ans++;
    }
    return ans;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int a, b; cin>>a>>b;
        int ans = 0;
        int addon = 0;
        if(b == 1) {
            addon = 1;
            b = 2;
        }
        int rangeMax = steps(a, b);
        ans = rangeMax;
        for(int i=b; i<=b+rangeMax; i++) {
            int step = steps(a, i);
            if((i-b) + step < ans) ans = ((i-b) + step);
        }
        cout<<ans + addon<<endl;
    }
}