#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    int t;
    cin>>t;
    while(t--) {
        int n;
        int k;
        cin>>n>>k;
        vector<int>v(n*k, 0);
        for(int i=0; i<v.size(); i++) {
            cin>>v[i];
        }
        int everyEle = n - ((n+1) / 2) + 1 ;
        int ans = 0;
        int i = v.size()-everyEle;
        while(k > 0) {
            ans = ans + v[i];
            k--;
            i = i - everyEle;
        }
        cout<<ans<<endl;
    }
}