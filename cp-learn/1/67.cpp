#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

vector<int> divisors(int x) {
    vector<int>ans;
    int value=1e12 + 1;
    for(int i=1; i<=pow(x, 0.5); i++) {
        if(x%i == 0) {
            int one = i;
            int two = x/i;
            if(value > max(one, two) && ((one*two) / __gcd(one, two)) == x) {
                ans = {one, two};
                value = max(one, two);
            }
        }
    }
    return ans;
}

signed main() {
    fastio();
    int x; cin>>x;
    vector<int>v = divisors(x);
    cout<<v[0]<<" "<<v[1];
}