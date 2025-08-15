#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

bool checkpali(int& k, string& s) {
    int count = k;
    int i=0;
    int j=s.length()-1;
    while(count > 0) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
        count--;
    }
    return true;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; int k;
        string s;
        cin>>n;
        cin>>k;
        cin>>s;
        if(n >= 2*k + 1 && checkpali(k, s)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}