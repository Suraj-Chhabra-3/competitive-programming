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
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'A') {
                st.push(s[i]);
            } else {
                if(st.size() == 0) {
                    st.push(s[i]);
                } else {
                    st.pop();
                }
            }
        }
        cout<<st.size()<<endl;
    }
}