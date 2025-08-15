#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    string a;
    string b;
    cin>>a;
    cin>>b;
    int ans = 0;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a < b) {
        ans = -1;  
    } else if(b < a) {
        ans = 1;
    }
    cout<<ans;
}