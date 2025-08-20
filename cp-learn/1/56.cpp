#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    int n; int k;
    cin>>n>>k;
    vector<int>v(n+1, 1);
    for(int i=2; i<=pow(n, 0.5); i++) {
        if(v[i] == 1) {
            for(int j=i*i; j<n+1; j=j+i) {
                v[j] = 0;
            }
        }
    }
    int i = 2;
    int j = 3;
    unordered_set<int>st;
    st.insert(i + j + 1);
    int ans = 0;
    for(int index=5; index<n+1; index++) {
        if(v[index] == 1) {
            if(st.find(index) != st.end()) ans++;
            i = j;
            j = index;
            st.insert(i + j + 1);
        }
    }
    if(ans >= k) cout<<"YES";
    else cout<<"NO";
}