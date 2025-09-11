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
        int n,r,b;
        cin>>n>>r>>b;
        vector<string>vec(b+1);
        int index = 0;
        while(r--) {
            vec[index].push_back('R');
            index++;
            if(index == vec.size()) index = 0;
        }
        string ans = "";
        for(auto it : vec) {
            ans.append(it);
            ans.push_back('B');
        } 
        ans.pop_back();
        cout<<ans<<endl;
    }
}