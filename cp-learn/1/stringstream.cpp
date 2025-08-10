#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    string s;
    string t;
    cin>>s;
    stringstream X(s);
    while(getline(X, t, '.')) {
        cout<<t<<endl;
    }
}