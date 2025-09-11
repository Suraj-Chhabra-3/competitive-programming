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
        int n,k,b,s; cin>>n>>k>>b>>s;
        int maxb = s/k;
        int minb = (s - (n-1) * (k-1)) / k;
        if(b < minb || b > maxb) {
            cout<<-1;
        } else {
            int count = 0;
            int sum = s;
            while(sum/k != b) {
                count++;
                sum = sum-(k-1);
            }
            vector<int>v(n, 0);
            v[0] = sum;
            int i=1;
            while(count--) {
                v[i] = k-1;
                i++;
            }
            for(auto it : v) cout<<it<<" ";
        }
        cout<<endl;
    }
}