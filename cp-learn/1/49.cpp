#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

// TC - O(1)

signed main() {
    fastio();
    vector<int>v(1e6 + 1, 0);
    for(int i=1; i<(1e6 + 1); i++) { // O(1)
        for(int j=i; j<(1e6 + 1); j=j+i) {
            v[j]++;
        }
    }
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        cout<<v[n]<<endl;
    }
}