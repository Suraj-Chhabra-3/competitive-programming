#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

bool repeat(vector<int>& v) {
    unordered_map<int, int>mpp; // ele -> count
    for(auto it : v) {
        mpp[it]++;
        if(mpp[it] > 1) return true;
    }
    return false;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        if(repeat(v)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}