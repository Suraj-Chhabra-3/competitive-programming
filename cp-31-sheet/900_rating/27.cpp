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
        int n, x;
        cin>>n>>x;
        vector<int>v(n);
        int sum = 0;
        for(int i=0; i<n; i++) {
            cin>>v[i];
            sum = sum + v[i];
        }
        int ans1 = ceil(double(sum) / double(x));
        int ans2 = 0;
        for(int i=0; i<v.size(); i++) {
            ans2 = ans2 + (ceil(double(v[i]) / double(x)));
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}