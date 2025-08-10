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
        int count = 0;
        stack<char>st;
        int i=0;
        while(i<s.length()) {
            if(st.size() == 0) {
                st.push(s[i]);
            } else if((st.top() == '1' && s[i] == '0') || (st.top() == '0' && s[i] == '1')) {
                st.pop();
                count++;
            } else {
                st.push(s[i]);
            }
            i++;
        }
        if(count%2 == 1) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
}