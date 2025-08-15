#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n;
        cin>>n;
        vector<int>v(n, 0);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        vector<int>skill(n+1, 0);
        int unique = 0;
        int same = 0;
        for(auto it : v) {
            if(skill[it] == 0) unique++;
            skill[it]++;
        }
        same = *max_element(skill.begin(), skill.end());
        int ans = 0;
        for(int i=same; i>=0; i--) {
            if(i==same) {
                if(unique - 1 >= i) {
                    ans = i;
                    break;
                }       
            } else {
                if(unique >= i){
                    ans = i;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}