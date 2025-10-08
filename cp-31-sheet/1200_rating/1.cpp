#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).rbegin(), (x).rend()
#define endl '\n'

const int MOD = 1e9 + 7;

int solve(vector<vector<int>>& xx, vector<vector<int>>& yy, vector<vector<int>>& zz) {
    

    // for(auto it : xx) {
    //     cout<<it[0]<<" "<<it[1]<<" ";
    // }

    // cout<<endl;

    // for(auto it : yy) {
    //     cout<<it[0]<<" "<<it[1]<<" ";
    // }

    // cout<<endl;

    // for(auto it : zz) {
    //     cout<<it[0]<<" "<<it[1]<<" ";
    // }

    int ans = 0;
    int index1 = xx[0][1];
    ans = ans + xx[0][0];

    int value = 0;

    // prefering second vector 
    int one = 0;
    int index2 = -1;
    for(int i=0; i<yy.size(); i++) {
        if(yy[i][1] != index1) {
            one = one + yy[i][0];
            index2 = yy[i][1];
            break;
        }
    }
    for(int i=0; i<zz.size(); i++) {
        if(zz[i][1] != index1 && zz[i][1] != index2) {
            one = one + zz[i][0];
            break;
        }
    }

    // prefering third vector 
    int two = 0;
    int index22 = -1;
    for(int i=0; i<zz.size(); i++) {
        if(zz[i][1] != index1) {
            two = two + zz[i][0];
            index22 = zz[i][1];
            break;
        }
    }
    for(int i=0; i<yy.size(); i++) {
        if(yy[i][1] != index1 && yy[i][1] != index22) {
            two = two + yy[i][0];
            break;
        }
    }


    value = max(one, two);
    ans = ans + value;
    return ans;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        vector<int>c(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        for(int i=0; i<n; i++) cin>>c[i];

        int ans = INT_MIN;


        vector<vector<int>>x;
        vector<vector<int>>y;
        vector<vector<int>>z;

        for(int i=0; i<a.size(); i++) x.push_back({a[i], i});
        for(int i=0; i<b.size(); i++) y.push_back({b[i], i});
        for(int i=0; i<c.size(); i++) z.push_back({c[i], i});

        sort(all(x)); sort(all(y)); sort(all(z));

        int one = solve(x, y, z);
        int two = solve(y, x, z);
        int three = solve(z, x, y);

        // cout<<one<<" "<<two<<" "<<three<<endl;
        ans = max(one, max(two, three));
        cout<<ans<<endl;
    }
}