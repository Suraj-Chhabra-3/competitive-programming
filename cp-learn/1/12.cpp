#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int value = a*b*c*d;
    if(value < 10) 
    int dig1 = value%10;
    value = value/10;
    int dig2 = value%10;
    cout<<dig2<<dig1;
}