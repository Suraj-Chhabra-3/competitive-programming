#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int a;
    char s;
    int b;
    char q;
    int c;
    cin>>a>>s>>b>>q>>c;
    if(s == '+') {
        if(c == a+b) cout<<"Yes";
        else cout<<a+b;
    } else if(s == '-') {
        if(c == a-b) cout<<"Yes";
        else cout<<a-b;
    } else {
        if(c == a*b) cout<<"Yes";
        else cout<<a*b;
    }
}