#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int a, b;
    char s;
    cin>>a>>s>>b;
    if(s == '<') {
        if(a < b) cout<<"Right";
        else cout<<"Wrong";
    } else if(s == '>') {
        if(a > b) cout<<"Right";
        else cout<<"Wrong";
    } else {
        if(a == b) cout<<"Right";
        else cout<<"Wrong";
    }
}