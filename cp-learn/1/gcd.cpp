#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;


// 1. brute force - O(min(A, B))
// signed main() {
//     fastio();
//     int a; int b; cin>>a>>b;
//     int ans = 0;
//     for(int i=1; i<=min(a, b); i++) {
//         if(a%i == 0 && b % i == 0) {
//             ans = i;
//         }
//     }
//     cout<<ans;
// }

// 2. euclidean theorum - logΦ(min(a, b))
signed main() {
    fastio();
    int a; int b; cin>>a>>b;
    while(a != 0 && b != 0) {
        if(a<=b) {
            b = b%a;
        } else {
            a = a%b;
        }
    }
    if(a==0) cout<<b;
    else cout<<a;
}

// LCM * HCF = A * B

// 3. stl - TC - O(most optimal like euclidean)
// gcd(a, b); 