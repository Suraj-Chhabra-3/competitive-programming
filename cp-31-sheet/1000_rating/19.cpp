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
        int n; cin>>n;
        vector<int>visit(n+1);
        visit[0] = 0;
        for(int i=1; i<n+1; i++) cin>>visit[i];
        vector<vector<int>>v;   // {times, building_number}
        for(int i=0; i<visit.size(); i++) {
            v.push_back({visit[i], i});
        }
        sort(v.rbegin(), v.rend());
        unordered_map<int, int>cordinate;  // building_number -> cordinate
        cordinate[0] = 0;
        int curr = 1;
        for(auto it : v) {
            if(it[1] == 0) {
                continue;
            }
            cordinate[it[1]] = curr;
            if(curr <= 0) {
                curr = abs(curr) + 1;
            } else {
                curr = -curr;
            }
        }   
        int ans = 0;
        for(auto it : cordinate) {
            ans += (abs(it.second)*(visit[it.first]));
        }
        cout<<2*ans<<endl;
        for(int i=0; i<n+1; i++) {
            cout<<cordinate[i]<<" ";
        }
        cout<<endl;
    }
}