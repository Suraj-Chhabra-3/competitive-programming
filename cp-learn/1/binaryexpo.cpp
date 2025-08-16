#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;


// 1. binary exponentation // TC - O(log2(B))

// int p(int a, int b) { 
//     if(b == 0) return 1;
//     int calculatehalf = p(a, b/2);
//     if(b%2 == 0) {
//         return calculatehalf*calculatehalf;
//     } else {
//         return calculatehalf*calculatehalf*a;
//     }
// }

// signed main() {
//     fastio();
//     int a; int b;
//     cin>>a>>b;
//     cout<<p(a, b);
// }

// 2. binary exponentation with modulo arithmatic - return [A^B % MOD]
// TC - O(logN) 

// int p(int a, int b) { 
//     if(b == 0) return 1;
//     int calculatehalf = p(a, b/2);
//     if(b%2 == 0) {
//         return (calculatehalf*calculatehalf) % MOD; // as 'calculatehalf' is always a modulo 
//     } else {
//         return (((calculatehalf*calculatehalf) % MOD) * ((a) % MOD)) % MOD;
//     }
// }

// signed main() {
//     fastio();
//     int a; int b;
//     cin>>a>>b;
//     cout<<p(a, b);
// }

