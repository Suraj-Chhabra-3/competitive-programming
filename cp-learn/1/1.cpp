#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    int a, b;
    cin>>a>>b;
    if(a%b == 0 || b%a == 0) {
        cout<<"Multiples";
    } else {
        cout<<"No Multiples";
    }
}