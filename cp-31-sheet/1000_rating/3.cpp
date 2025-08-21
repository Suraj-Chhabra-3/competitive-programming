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
        int n; int p;
        cin>>n>>p;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        vector<vector<int>>final;
        for(int i=0; i<n; i++) {
            final.push_back({b[i], a[i]});
        }
        sort(all(final));

        int ans = p;
        int totalPeople = 1;
        int i = 0;

        while(totalPeople < n) {
            if(p <= final[i][0]) {
                ans = ans + ((n-totalPeople) * p);
                break;
            }
            int digit = min(n-totalPeople, final[i][1]);
            ans = ans + (final[i][0] * digit);
            totalPeople = totalPeople + digit;
            i++;
        }

        cout<<ans<<endl;

    }
}