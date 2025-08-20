#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() {
    fastio();
    int n; cin>>n;
    vector<int>v;
    while(n != 0) {
        v.push_back(n%10);
        n = n/10;
    }
    reverse(v.begin(), v.end());
    int product = accumulate(v.begin(), v.end(), 1, multiplies<int>());
    int size = v.size();
    for(int i=0; i<v.size(); i++) {
        int value = 1;
        for(int j=0; j<v.size(); j++) {
            if(j<i) {
                value = value*v[j];
            } else if(j==i) {
                if(!(j == 0 && v[j] == 1)) {
                    value = value * (v[j] - 1);
                }
            } else {
                value = value*9;
            }
        }
        product = max(product, value);
    }
    cout<<product;
}