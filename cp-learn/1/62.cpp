#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

int numbers(int n, int x) {
    int ans = 0;
    ans = ans + n/5;
    if(x != 0 && n%5 >= x) ans++;
    return ans;
}

signed main() {
    fastio();
    int n; int m; cin>>n; cin>>m;
    int ans = 0;
    
    ans = ans + numbers(n, 0)*numbers(m, 0);
    ans = ans + numbers(n, 1)*numbers(m, 4);
    ans = ans + numbers(n, 4)*numbers(m, 1);
    ans = ans + numbers(n, 2)*numbers(m, 3);
    ans = ans + numbers(n, 3)*numbers(m, 2);

    cout<<ans;
}