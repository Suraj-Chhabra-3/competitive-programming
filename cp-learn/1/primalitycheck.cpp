#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'


// 1. brute - force - O(N)
// signed main() {
//     fastio();
//     int n;
//     cin>>n;
//     string ans = "YES";
//     for(int i=2; i<n; i++) {
//         if(n%i == 0) {
//             ans = "NO";
//             break;
//         }
//     }
//     cout<<ans;
// }

// 2. Optimal - O(root N) 

// signed main() {
//     fastio();
//     int n;
//     cin>>n;
//     string ans = "YES";
//     for(int i=2; i<=pow(n, 0.5); i++) {
//         if(n%i == 0) {
//             ans = "NO";
//             break;
//         }
//     }
//     cout<<ans;
// }

// 3. Sieve of Eratosthenes - O(N * log(logN))

// signed main() {
//     fastio();
//     int n;
//     cin>>n;
//     vector<int>v(n+1, 1);
//     for(int i=2; i<=pow(n, 0.5); i++) {
//         if(v[i] == 1) {
//             for(int j=i*i; j<n+1; j = j+i) {
//                 v[j] = 0;
//             }
//         }
//     }
//     cout<<v[n];
// }

signed main() {
    fastio();

}