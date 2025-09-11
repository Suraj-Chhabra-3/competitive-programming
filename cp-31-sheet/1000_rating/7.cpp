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
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        int finalans = 0;

        unordered_map<int, int>mppa;

        int con = 0;
        int ele = -1;
        for(int i=0; i<n; i++) {
            if(ele == a[i]) {
                con++;
                mppa[ele] = max(mppa[ele], con);
            } else {
                con = 1;
                ele = a[i];
                mppa[ele] = max(mppa[ele], con);
            }
        }

        unordered_map<int, int>mppb;

        int con2 = 0;
        int ele2 = -1;
        for(int i=0; i<n; i++) {
            if(ele2 == b[i]) {
                con2++;
                mppb[ele2] = max(mppb[ele2], con2);
            } else {
                con2 = 1;
                ele2 = b[i];
                mppb[ele2] = max(mppb[ele2], con2);
            }
        }

        for(auto it : mppa) {
            finalans = max(finalans, it.second + mppb[it.first]);
        }
        for(auto it : mppb) {
            finalans = max(finalans, it.second + mppa[it.first]);
        }
        cout<<finalans<<endl;
    }
}