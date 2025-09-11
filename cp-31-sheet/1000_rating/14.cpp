#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;



bool possible(vector<int>& v, map<int, int>& mpp) {
    for(auto it : v) {
        mpp[it]++;
    }
    for(auto it : mpp) {
        if(it.second < 2) return false;
    }
    return true;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        map<int, int>mpp; // {ele, count}
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        bool check = possible(v, mpp);
        if(check) {
            for(int i=0; i<v.size(); i++) {
                if(i == v.size()-1 || v[i] != v[i+1]) {
                    int count = mpp[v[i]];
                    cout<<(i - (count-1) + 1)<<" ";
                } else {
                    cout<<i+2<<" ";
                }
            }
        } else {
            cout<<-1;
        }
        cout<<endl;
    }
}