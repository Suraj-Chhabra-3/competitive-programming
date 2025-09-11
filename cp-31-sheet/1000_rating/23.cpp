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
    vector<int>v(100000+1, 1);
    for(int i=2; i<=pow(100000, 0.5); i++) {
        if(v[i] == 1) {
            for(int j=i*i; j<100000+1; j = j+i) {
                v[j] = 0;
            }
        }
    }
    while (tc--) {
        int d;
        cin>>d;

        // case - 1 
        int ans1 = 0;
        int p1 = 0;
        int q1 = 0;
        for(int i=d+1; i<100000+1; i++) {
            if(v[i] == 1) {
                p1 = i;
                break;
            }
        }
        for(int i=d+p1; i<100000+1; i++) {
            if(v[i] == 1) {
                q1 = i;
                break;
            }
        }
        ans1 = p1*q1;

        // case - 2
        int ans2 = 0;
        int p2 = 0;
        for(int i=d+1; i<100000+1; i++) {
            if(v[i] == 1) {
                if(i*i > d + i) {
                    p2 = i;
                    break;
                }
            }
        }
        ans2 = (p2*p2*p2);

        cout<<min(ans1, ans2)<<endl;

    }
}