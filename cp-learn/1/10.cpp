#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define endl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    char ch;
    cin>>ch;
    char chh;
    if((int)(ch) >= 97 ) {
        chh = char((int)(ch) - 32);
    } else {
        chh = char((int)(ch) + 32);
    }
    cout<<chh;
}