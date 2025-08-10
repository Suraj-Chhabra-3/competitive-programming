#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    int a;
    int b;
    char s;
    cin>>a>>s>>b;
    if(s == '+') {
        cout<<a+b;
    }else if(s == '-') {
        cout<<a-b;
    } else if(s == '*') {
        cout<<a*b;
    } else {
        cout<<a/b;
    }
}