#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

bool powerof2(int n) {
    if(n <= 0) {
        return false;
    }

    n = n&(n-1);
    if(n == 0) {
        return true;
    }

    return false;
}


signed main() {
    fastio();
    int tc; cin >> tc;

    while (tc--) {
        int a, b;  cin>>a>>b;
        double value = double(max(a, b))/double(min(a, b));
        if(ceil(value) != value || powerof2(value) == false) {
            cout<<-1<<endl;
        } else {
            int num = (int)(value);
            int ans = 0;
            while(num % 8 == 0) {
                num = num/8;
                ans++;
            }
            while(num % 4 == 0) {
                num = num/4;
                ans++;
            }
            while(num % 2 == 0) {
                num = num/2;
                ans++;
            }

            cout<<ans<<endl;
        }
    }
}