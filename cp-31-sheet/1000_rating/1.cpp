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
        string s;
        cin>>s;
        int one = 0;
        int zero = 0;
        for(auto it : s) {
            if(it == '0') zero++;
            if(it == '1') one++;
        }
        for(auto it:s) {
            if(it == '1') {
                if(zero == 0) break;
                else zero--;
            } 
            if(it == '0') {
                if(one == 0) break;
                else one--;
            }
        }
        cout<<max(one, zero)<<endl;
    }
}