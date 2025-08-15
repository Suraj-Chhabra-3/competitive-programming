#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    string s;
    cin>>s;
    vector<int>v(26, 0);
    for(int i=0; i<s.length(); i++) {
        v[(int)(s[i]) - 65]++;
    }
    int oddValues = 0;
    for(int i=0; i<26; i++) {
        if(v[i]%2 == 1) {
            oddValues++;
        }
    }
    if(oddValues > 1) {
        cout<<"NO SOLUTION";
    } else {
        string ans(s.length(), '.');
        int i=0; int j = s.length()-1;
        int odd = -1;
        for(int index=0; index<26; index++) {

            if(v[index]%2 == 1) odd = index;
            int count = v[index]/2;
            while(count--) {
                ans[i] = char(index + 65);
                ans[j] = ans[i];
                i++;
                j--;
            }
        }
        if(odd != -1) ans[i] = char(odd + 65);
        cout<<ans;
    }
}